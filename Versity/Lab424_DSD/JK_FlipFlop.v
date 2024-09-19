module JK_flip_flop (
    input wire J, 
    input wire K,  
    input wire clk, 
    output reg Q,   
    output reg Q_n  
);

    always @(posedge clk) begin
       if(J && !K) begin
	assign Q = 1; end

       else if(!J && K) begin
	assign Q = 0; end

       else if(J && K) begin
	assign Q = ~Q; end

	assign Q_n = ~Q;
      end

endmodule

module tb_JK_flip_flop;

    reg J;
    reg K;
    reg clk;
    wire Q;
    wire Q_n;


    JK_flip_flop uut (
	.J(J),
	.K(K),
        .clk(clk),
        .Q(Q),
        .Q_n(Q_n)
    );


    always #5 clk = ~clk; 

    initial begin

        clk = 0;
        J = 0;
	K = 0;

        #10 J = 1; K = 0;
        #10 J = 0; K = 0;

	#10 J = 0; K = 1;
        #10 J = 0; K = 0;

        #10 J = 1; K = 1;
        #10 J = 1; K = 1;
	#10 J = 0; K = 0;

        #1000 $finish;
    end
endmodule