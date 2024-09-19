
module T_flip_flop (
    input wire T,   
    input wire clk, 
    output reg Q,   
    output reg Q_n  
);

    always @(posedge clk) begin
       if(T) begin
	assign Q = ~Q;
        end
	
	assign Q_n = ~Q;
	end

endmodule

module tb_T_flip_flop;

    reg T;
    reg clk;
    wire Q;
    wire Q_n;


    T_flip_flop uut (
	.T(T),
        .clk(clk),
        .Q(Q),
        .Q_n(Q_n)
    );


    always #5 clk = ~clk; 

    initial begin

        clk = 0;
        T = 0;

        #10 T = 1;
        #10 T = 1;

        #20 T = 0;
        #20 T = 0;

        #1000 $finish;
    end
endmodule