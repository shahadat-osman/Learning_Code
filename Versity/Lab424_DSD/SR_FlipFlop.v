module sr_flip_flop (
    input wire S,   // Set input
    input wire R,   // Reset input
    input wire clk, // Clock input
    output reg Q,   // Output
    output reg Q_n  // Inverted output
);

    always @(posedge clk) begin
        if (S && !R) begin
            Q <= 1;     // Set condition
        end else if (!S && R) begin
            Q <= 0;     // Reset condition
        end
        // If S and R are both 0 or both 1, maintain previous state
        Q_n <= ~Q; // Q_n is always the inverse of Q
    end

endmodule

module tb_sr_flip_flop;

    reg S;
    reg R;
    reg clk;
    wire Q;
    wire Q_n;

    // Instantiate the SR flip-flop
    sr_flip_flop uut (
        .S(S),
        .R(R),
        .clk(clk),
        .Q(Q),
        .Q_n(Q_n)
    );

    // Clock generation
    always #5 clk = ~clk; // 10-time unit clock period

    initial begin
        // Initialize inputs
        clk = 0;
        S = 0;
        R = 0;

        // Test scenario 1: Set condition
        #10 S = 1; R = 0;
        #10 S = 0; R = 0; // Return to hold state

        // Test scenario 2: Reset condition
        #10 S = 0; R = 1;
        #10 S = 0; R = 0; // Return to hold state

        // Test scenario 3: Invalid state (both S and R high)
        #10 S = 1; R = 1;
        #10 S = 0; R = 0; // Return to hold state

        // End simulation
        #1000 $finish;
    end

    // Monitor changes
    initial begin
        $monitor("At time %t, S = %b, R = %b, Q = %b, Q_n = %b", $time, S, R, Q, Q_n);
    end

endmodule

