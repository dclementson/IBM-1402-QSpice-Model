// Automatically generated .v file on Sat Feb  3 23:32:20 2024
//

module clutchcamassy ( clk, clch_latch, power, cont_angle, clch_angle, rc1, rc2, rc3, rc4, rc5, rc6, rc7, rc8, rc9, rc12, rl1, rl2, rl3, rl10, sccb ) ;
// You will probably want to flush out the nature of these port declarations:
   input reg clk;
   input reg clch_latch;
   input reg power;
   output reg [0:11] cont_angle;
   output reg [0:8] clch_angle;
   output reg rc1;
   output reg rc2;
   output reg rc3;
   output reg rc4;
   output reg rc5;
   output reg rc6;
   output reg rc7;
   output reg rc8;
   output reg rc9;
   output reg rc12;
   output reg rl1;
   output reg rl2;
   output reg rl3;
   output reg rl10;
   output reg sccb;
   reg latched = 1'b1;

   // Implement the module here

always @(posedge clk)
   begin
      if(cont_angle == 9'd315)
        begin
            clch_angle <= 9'd315;
            if (clch_latch)
               begin
                  // $display("Latched at 315 degrees at t=%g", 1e-9 * $realtime);
                  latched <= 1'b1;
               end
            else
               begin
                  // $display("Unlatched to at t=%g", 1e-9 * $realtime);
                  latched <= 1'b0;
               end
      end

      if (power)
         cont_angle <= cont_angle + 9'h01;
      if (cont_angle == 9'd360)
         begin
            // $display("Continuous Angle rolled over at t=%g", 1e-9 * $realtime);
            cont_angle <= 9'd0;
         end

      if(latched)
         begin
            if (power)
               clch_angle <= clch_angle + 9'h01;
            if (clch_angle == 9'd360)
               begin
                  // $display("Clutch Angle rolled over at t=%g", 1e-9 * $realtime);
                  clch_angle <= 9'd0;
               end
         end
   end

   assign rc1 =
   (((cont_angle >= 9'd008) && (cont_angle < 9'd093)) ||
    ((cont_angle >= 9'd128) && (cont_angle < 9'd213)) ||
    ((cont_angle >= 9'd248) && (cont_angle < 9'd333)))
    ? 1'b1 : 1'b0;

   assign rc2 =
    ((cont_angle >= 9'd340) || (cont_angle < 9'd065)  ||
    ((cont_angle >= 9'd100) && (cont_angle < 9'd195)) ||
    ((cont_angle >= 9'd220) && (cont_angle < 9'd306)))
    ? 1'b1 : 1'b0;

   assign rc3 =
    ((cont_angle >= 9'd342) || (cont_angle < 9'd027)  ||
    ((cont_angle >= 9'd102) && (cont_angle < 9'd147)) ||
    ((cont_angle >= 9'd222) && (cont_angle < 9'd267)))
    ? 1'b1 : 1'b0;

   assign rc4 =
   (((cont_angle >= 9'd022) && (cont_angle < 9'd107)) ||
    ((cont_angle >= 9'd142) && (cont_angle < 9'd227)) ||
    ((cont_angle >= 9'd262) && (cont_angle < 9'd347)))
    ? 1'b1 : 1'b0;

   assign rc5 =
    ((cont_angle >= 9'd272) && (cont_angle < 9'd342))
    ? 1'b1 : 1'b0;

   assign rc6 =
   (((cont_angle >= 9'd032) && (cont_angle < 9'd102)) ||
    ((cont_angle >= 9'd152) && (cont_angle < 9'd222)) ||
    ((cont_angle >= 9'd272) && (cont_angle < 9'd342)))
    ? 1'b1 : 1'b0;

   assign rc7 =
    ((cont_angle >= 9'd347) || (cont_angle < 9'd022)  ||
    ((cont_angle >= 9'd107) && (cont_angle < 9'd142)) ||
    ((cont_angle >= 9'd227) && (cont_angle < 9'd262)))
    ? 1'b1 : 1'b0;

   assign rc8 =
   (((cont_angle >= 9'd032) && (cont_angle < 9'd117)) ||
    ((cont_angle >= 9'd152) && (cont_angle < 9'd237)) ||
    ((cont_angle >= 9'd272) && (cont_angle < 9'd357)))
    ? 1'b1 : 1'b0;

   assign rc9 =
    ((cont_angle >= 9'd305) || (cont_angle < 9'd015)  ||
    ((cont_angle >= 9'd065) && (cont_angle < 9'd135)) ||
    ((cont_angle >= 9'd185) && (cont_angle < 9'd265)))
    ? 1'b1 : 1'b0;

   assign rc12 =
    ((cont_angle >= 9'd331) || (cont_angle < 9'd006)  ||
    ((cont_angle >= 9'd091) && (cont_angle < 9'd126)) ||
    ((cont_angle >= 9'd211) && (cont_angle < 9'd246)))
    ? 1'b1 : 1'b0;


   assign rl1 =
   (((clch_angle >= 9'd155) && (clch_angle < 9'd185)) ||
    ((clch_angle >= 9'd242) && (clch_angle < 9'd307)))
    ? 1'b1 : 1'b0;

   assign rl2 =
     (clch_angle >= 9'd325) || (clch_angle < 9'd155)
    ? 1'b1 : 1'b0;

   assign rl3 =
    ((clch_angle >= 9'd155) && (clch_angle < 9'd277))
    ? 1'b1 : 1'b0;

   assign rl10 =
    ((clch_angle >= 9'd272) && (clch_angle < 9'd342))
    ? 1'b1 : 1'b0;

   assign sccb =
   (((clch_angle >= 9'd012) && (clch_angle < 9'd014)) ||
    ((clch_angle >= 9'd030) && (clch_angle < 9'd032)) ||
    ((clch_angle >= 9'd048) && (clch_angle < 9'd050)) ||
    ((clch_angle >= 9'd066) && (clch_angle < 9'd068)) ||
    ((clch_angle >= 9'd084) && (clch_angle < 9'd086)) ||
    ((clch_angle >= 9'd102) && (clch_angle < 9'd104)) ||
    ((clch_angle >= 9'd120) && (clch_angle < 9'd122)) ||
    ((clch_angle >= 9'd138) && (clch_angle < 9'd140)) ||
    ((clch_angle >= 9'd156) && (clch_angle < 9'd158)) ||
    ((clch_angle >= 9'd174) && (clch_angle < 9'd176)) ||
    ((clch_angle >= 9'd192) && (clch_angle < 9'd194)) ||
    ((clch_angle >= 9'd210) && (clch_angle < 9'd212)))
    ? 1'b1 : 1'b0;

endmodule

