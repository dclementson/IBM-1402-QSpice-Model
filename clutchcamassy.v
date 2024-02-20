module clutchcamassy(clk, clch_latch, power, cont_angle, clch_angle, rc1, rc2, rc3, rc4, rc5, rc6, rc7, rc8, rc9, rc12, rl1, rl2, rl3, rl10, sccb);
input logic clk;
input logic clch_latch;
input logic power;
output int cont_angle;
output int clch_angle;
output logic rc1;
output logic rc2;
output logic rc3;
output logic rc4;
output logic rc5;
output logic rc6;
output logic rc7;
output logic rc8;
output logic rc9;
output logic rc12;
output logic rl1;
output logic rl2;
output logic rl3;
output logic rl10;
output logic sccb;
logic latched;

initial begin
   cont_angle = 0;
   clch_angle = 315; // Clutched shaft rests at 315 degrees.
   latched = 0;
end

always @(posedge clk) begin
   // For sync mode, only latch at 315 degrees. For non-sync mode, clutch can
   // latch at any of 75, 195 or 315 degrees.
   if ((clch_angle == 315) && (
      cont_angle == 75 ||    // non-sync mode
      cont_angle == 195 ||   // non-sync mode
      cont_angle == 315)
   ) begin
         latched = clch_latch;
   end

   if (power) begin
      // Selectively advance the continuous and clutched shaft positions.
      cont_angle <= (cont_angle + 1) % 360;
      if (latched)
         clch_angle <= (clch_angle + 1) % 360;
   end
end

assign rc1 =
   (((cont_angle >= 8) && (cont_angle < 93))    ||
    ((cont_angle >= 128) && (cont_angle < 213)) ||
    ((cont_angle >= 248) && (cont_angle < 333)))
    ? 1'b1 : 1'b0;

assign rc2 =
    ((cont_angle >= 340) || (cont_angle < 65)   ||
    ((cont_angle >= 100) && (cont_angle < 195)) ||
    ((cont_angle >= 220) && (cont_angle < 306)))
    ? 1'b1 : 1'b0;

assign rc3 =
    ((cont_angle >= 342) || (cont_angle < 27)   ||
    ((cont_angle >= 102) && (cont_angle < 147)) ||
    ((cont_angle >= 222) && (cont_angle < 267)))
    ? 1'b1 : 1'b0;

assign rc4 =
   (((cont_angle >= 22) && (cont_angle < 107))  ||
    ((cont_angle >= 142) && (cont_angle < 227)) ||
    ((cont_angle >= 262) && (cont_angle < 347)))
    ? 1'b1 : 1'b0;

assign rc5 =
    ((cont_angle >= 272) && (cont_angle < 342))
    ? 1'b1 : 1'b0;

assign rc6 =
   (((cont_angle >= 32) && (cont_angle < 102))  ||
    ((cont_angle >= 152) && (cont_angle < 222)) ||
    ((cont_angle >= 272) && (cont_angle < 342)))
    ? 1'b1 : 1'b0;

assign rc7 =
    ((cont_angle >= 347) || (cont_angle < 22)   ||
    ((cont_angle >= 107) && (cont_angle < 142)) ||
    ((cont_angle >= 227) && (cont_angle < 262)))
    ? 1'b1 : 1'b0;

assign rc8 =
   (((cont_angle >= 32) && (cont_angle < 117))  ||
    ((cont_angle >= 152) && (cont_angle < 237)) ||
    ((cont_angle >= 272) && (cont_angle < 357)))
    ? 1'b1 : 1'b0;

assign rc9 =
    ((cont_angle >= 305) || (cont_angle < 15)   ||
    ((cont_angle >= 65) && (cont_angle < 135))  ||
    ((cont_angle >= 185) && (cont_angle < 265)))
    ? 1'b1 : 1'b0;

assign rc12 =
    ((cont_angle >= 331) || (cont_angle < 6)    ||
    ((cont_angle >= 91) && (cont_angle < 126))  ||
    ((cont_angle >= 211) && (cont_angle < 246)))
    ? 1'b1 : 1'b0;


assign rl1 =
   (((clch_angle >= 155) && (clch_angle < 185)) ||
    ((clch_angle >= 242) && (clch_angle < 307)))
    ? 1'b1 : 1'b0;

assign rl2 =
     (clch_angle >= 325) || (clch_angle < 155)
    ? 1'b1 : 1'b0;

assign rl3 =
    ((clch_angle >= 155) && (clch_angle < 277))
    ? 1'b1 : 1'b0;

assign rl10 =
    ((clch_angle >= 272) && (clch_angle < 342))
    ? 1'b1 : 1'b0;

assign sccb =
   (((clch_angle >= 12) && (clch_angle < 14)  ) ||
    ((clch_angle >= 30) && (clch_angle < 32))   ||
    ((clch_angle >= 48) && (clch_angle < 50))   ||
    ((clch_angle >= 66) && (clch_angle < 68))   ||
    ((clch_angle >= 84) && (clch_angle < 86))   ||
    ((clch_angle >= 102) && (clch_angle < 104)) ||
    ((clch_angle >= 120) && (clch_angle < 122)) ||
    ((clch_angle >= 138) && (clch_angle < 140)) ||
    ((clch_angle >= 156) && (clch_angle < 158)) ||
    ((clch_angle >= 174) && (clch_angle < 176)) ||
    ((clch_angle >= 192) && (clch_angle < 194)) ||
    ((clch_angle >= 210) && (clch_angle < 212)))
    ? 1'b1 : 1'b0;

endmodule
