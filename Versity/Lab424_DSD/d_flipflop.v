module d_flip_flop (
    input wire D,   
    input wire clk, 
    output reg Q,   
    output reg Q_n  
);

    always @(posedge clk) begin
        assign Q = D;
	assign Q_n = ~Q;
        end

endmodule

module tb_d_flip_flop;

    reg D;
    reg clk;
    wire Q;
    wire Q_n;


    d_flip_flop uut (
	.D(D),
        .clk(clk),
        .Q(Q),
        .Q_n(Q_n)
    );


    always #5 clk = ~clk; 

    initial begin

        clk = 0;
        D = 0;

        #10 D = 0;
        #10 D = 1;

        #10 D = 0;
        #10 D = 1;

        #1000 $finish;
    end
endmodule
