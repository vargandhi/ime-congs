module data_arrays_0_ext( // @[anonymous source 2:2]
  input  [11:0] RW0_addr, // @[anonymous source 3:4]
  input         RW0_clk, // @[anonymous source 4:4]
  input  [31:0] RW0_wdata, // @[anonymous source 5:4]
  output [31:0] RW0_rdata, // @[anonymous source 6:4]
  input         RW0_en, // @[anonymous source 7:4]
  input         RW0_wmode, // @[anonymous source 8:4]
  input  [3:0]  RW0_wmask // @[anonymous source 9:4]
);
  wire [11:0] mem_0_0_RW0_addr; // @[anonymous source 11:4]
  wire  mem_0_0_RW0_clk; // @[anonymous source 11:4]
  wire [7:0] mem_0_0_RW0_wdata; // @[anonymous source 11:4]
  wire [7:0] mem_0_0_RW0_rdata; // @[anonymous source 11:4]
  wire  mem_0_0_RW0_en; // @[anonymous source 11:4]
  wire  mem_0_0_RW0_wmode; // @[anonymous source 11:4]
  wire  mem_0_0_RW0_wmask; // @[anonymous source 11:4]
  wire [11:0] mem_0_1_RW0_addr; // @[anonymous source 12:4]
  wire  mem_0_1_RW0_clk; // @[anonymous source 12:4]
  wire [7:0] mem_0_1_RW0_wdata; // @[anonymous source 12:4]
  wire [7:0] mem_0_1_RW0_rdata; // @[anonymous source 12:4]
  wire  mem_0_1_RW0_en; // @[anonymous source 12:4]
  wire  mem_0_1_RW0_wmode; // @[anonymous source 12:4]
  wire  mem_0_1_RW0_wmask; // @[anonymous source 12:4]
  wire [11:0] mem_0_2_RW0_addr; // @[anonymous source 13:4]
  wire  mem_0_2_RW0_clk; // @[anonymous source 13:4]
  wire [7:0] mem_0_2_RW0_wdata; // @[anonymous source 13:4]
  wire [7:0] mem_0_2_RW0_rdata; // @[anonymous source 13:4]
  wire  mem_0_2_RW0_en; // @[anonymous source 13:4]
  wire  mem_0_2_RW0_wmode; // @[anonymous source 13:4]
  wire  mem_0_2_RW0_wmask; // @[anonymous source 13:4]
  wire [11:0] mem_0_3_RW0_addr; // @[anonymous source 14:4]
  wire  mem_0_3_RW0_clk; // @[anonymous source 14:4]
  wire [7:0] mem_0_3_RW0_wdata; // @[anonymous source 14:4]
  wire [7:0] mem_0_3_RW0_rdata; // @[anonymous source 14:4]
  wire  mem_0_3_RW0_en; // @[anonymous source 14:4]
  wire  mem_0_3_RW0_wmode; // @[anonymous source 14:4]
  wire  mem_0_3_RW0_wmask; // @[anonymous source 14:4]
  wire [7:0] RW0_rdata_0_0 = mem_0_0_RW0_rdata; // @[anonymous source 17:4]
  wire [7:0] RW0_rdata_0_1 = mem_0_1_RW0_rdata; // @[anonymous source 24:4]
  wire [7:0] RW0_rdata_0_2 = mem_0_2_RW0_rdata; // @[anonymous source 31:4]
  wire [7:0] RW0_rdata_0_3 = mem_0_3_RW0_rdata; // @[anonymous source 38:4]
  wire [15:0] _GEN_0 = {RW0_rdata_0_1,RW0_rdata_0_0}; // @[anonymous source 43:4]
  wire [23:0] _GEN_1 = {RW0_rdata_0_2,RW0_rdata_0_1,RW0_rdata_0_0}; // @[anonymous source 43:4]
  wire [31:0] RW0_rdata_0 = {RW0_rdata_0_3,RW0_rdata_0_2,RW0_rdata_0_1,RW0_rdata_0_0}; // @[anonymous source 43:4]
  wire [15:0] _GEN_2 = {RW0_rdata_0_1,RW0_rdata_0_0}; // @[anonymous source 43:4]
  wire [23:0] _GEN_3 = {RW0_rdata_0_2,RW0_rdata_0_1,RW0_rdata_0_0}; // @[anonymous source 43:4]
  split_data_arrays_0_ext mem_0_0 ( // @[anonymous source 11:4]
    .RW0_addr(mem_0_0_RW0_addr),
    .RW0_clk(mem_0_0_RW0_clk),
    .RW0_wdata(mem_0_0_RW0_wdata),
    .RW0_rdata(mem_0_0_RW0_rdata),
    .RW0_en(mem_0_0_RW0_en),
    .RW0_wmode(mem_0_0_RW0_wmode),
    .RW0_wmask(mem_0_0_RW0_wmask)
  );
  split_data_arrays_0_ext mem_0_1 ( // @[anonymous source 12:4]
    .RW0_addr(mem_0_1_RW0_addr),
    .RW0_clk(mem_0_1_RW0_clk),
    .RW0_wdata(mem_0_1_RW0_wdata),
    .RW0_rdata(mem_0_1_RW0_rdata),
    .RW0_en(mem_0_1_RW0_en),
    .RW0_wmode(mem_0_1_RW0_wmode),
    .RW0_wmask(mem_0_1_RW0_wmask)
  );
  split_data_arrays_0_ext mem_0_2 ( // @[anonymous source 13:4]
    .RW0_addr(mem_0_2_RW0_addr),
    .RW0_clk(mem_0_2_RW0_clk),
    .RW0_wdata(mem_0_2_RW0_wdata),
    .RW0_rdata(mem_0_2_RW0_rdata),
    .RW0_en(mem_0_2_RW0_en),
    .RW0_wmode(mem_0_2_RW0_wmode),
    .RW0_wmask(mem_0_2_RW0_wmask)
  );
  split_data_arrays_0_ext mem_0_3 ( // @[anonymous source 14:4]
    .RW0_addr(mem_0_3_RW0_addr),
    .RW0_clk(mem_0_3_RW0_clk),
    .RW0_wdata(mem_0_3_RW0_wdata),
    .RW0_rdata(mem_0_3_RW0_rdata),
    .RW0_en(mem_0_3_RW0_en),
    .RW0_wmode(mem_0_3_RW0_wmode),
    .RW0_wmask(mem_0_3_RW0_wmask)
  );
  assign RW0_rdata = {RW0_rdata_0_3,_GEN_1}; // @[anonymous source 43:4]
  assign mem_0_0_RW0_addr = RW0_addr; // @[anonymous source 16:4]
  assign mem_0_0_RW0_clk = RW0_clk; // @[anonymous source 15:4]
  assign mem_0_0_RW0_wdata = RW0_wdata[7:0]; // @[anonymous source 18:4]
  assign mem_0_0_RW0_en = RW0_en; // @[anonymous source 21:4]
  assign mem_0_0_RW0_wmode = RW0_wmode; // @[anonymous source 20:4]
  assign mem_0_0_RW0_wmask = RW0_wmask[0]; // @[anonymous source 19:4]
  assign mem_0_1_RW0_addr = RW0_addr; // @[anonymous source 23:4]
  assign mem_0_1_RW0_clk = RW0_clk; // @[anonymous source 22:4]
  assign mem_0_1_RW0_wdata = RW0_wdata[15:8]; // @[anonymous source 25:4]
  assign mem_0_1_RW0_en = RW0_en; // @[anonymous source 28:4]
  assign mem_0_1_RW0_wmode = RW0_wmode; // @[anonymous source 27:4]
  assign mem_0_1_RW0_wmask = RW0_wmask[1]; // @[anonymous source 26:4]
  assign mem_0_2_RW0_addr = RW0_addr; // @[anonymous source 30:4]
  assign mem_0_2_RW0_clk = RW0_clk; // @[anonymous source 29:4]
  assign mem_0_2_RW0_wdata = RW0_wdata[23:16]; // @[anonymous source 32:4]
  assign mem_0_2_RW0_en = RW0_en; // @[anonymous source 35:4]
  assign mem_0_2_RW0_wmode = RW0_wmode; // @[anonymous source 34:4]
  assign mem_0_2_RW0_wmask = RW0_wmask[2]; // @[anonymous source 33:4]
  assign mem_0_3_RW0_addr = RW0_addr; // @[anonymous source 37:4]
  assign mem_0_3_RW0_clk = RW0_clk; // @[anonymous source 36:4]
  assign mem_0_3_RW0_wdata = RW0_wdata[31:24]; // @[anonymous source 39:4]
  assign mem_0_3_RW0_en = RW0_en; // @[anonymous source 42:4]
  assign mem_0_3_RW0_wmode = RW0_wmode; // @[anonymous source 41:4]
  assign mem_0_3_RW0_wmask = RW0_wmask[3]; // @[anonymous source 40:4]
endmodule
module tag_array_ext( // @[anonymous source 46:2]
  input  [5:0]  RW0_addr, // @[anonymous source 47:4]
  input         RW0_clk, // @[anonymous source 48:4]
  input  [20:0] RW0_wdata, // @[anonymous source 49:4]
  output [20:0] RW0_rdata, // @[anonymous source 50:4]
  input         RW0_en, // @[anonymous source 51:4]
  input         RW0_wmode, // @[anonymous source 52:4]
  input         RW0_wmask // @[anonymous source 53:4]
);
  wire [5:0] mem_0_0_RW0_addr; // @[anonymous source 55:4]
  wire  mem_0_0_RW0_clk; // @[anonymous source 55:4]
  wire [20:0] mem_0_0_RW0_wdata; // @[anonymous source 55:4]
  wire [20:0] mem_0_0_RW0_rdata; // @[anonymous source 55:4]
  wire  mem_0_0_RW0_en; // @[anonymous source 55:4]
  wire  mem_0_0_RW0_wmode; // @[anonymous source 55:4]
  wire  mem_0_0_RW0_wmask; // @[anonymous source 55:4]
  wire [20:0] RW0_rdata_0_0 = mem_0_0_RW0_rdata; // @[anonymous source 58:4]
  wire [20:0] RW0_rdata_0 = RW0_rdata_0_0; // @[anonymous source 58:4]
  split_tag_array_ext mem_0_0 ( // @[anonymous source 55:4]
    .RW0_addr(mem_0_0_RW0_addr),
    .RW0_clk(mem_0_0_RW0_clk),
    .RW0_wdata(mem_0_0_RW0_wdata),
    .RW0_rdata(mem_0_0_RW0_rdata),
    .RW0_en(mem_0_0_RW0_en),
    .RW0_wmode(mem_0_0_RW0_wmode),
    .RW0_wmask(mem_0_0_RW0_wmask)
  );
  assign RW0_rdata = mem_0_0_RW0_rdata; // @[anonymous source 58:4]
  assign mem_0_0_RW0_addr = RW0_addr; // @[anonymous source 57:4]
  assign mem_0_0_RW0_clk = RW0_clk; // @[anonymous source 56:4]
  assign mem_0_0_RW0_wdata = RW0_wdata; // @[anonymous source 59:4]
  assign mem_0_0_RW0_en = RW0_en; // @[anonymous source 62:4]
  assign mem_0_0_RW0_wmode = RW0_wmode; // @[anonymous source 61:4]
  assign mem_0_0_RW0_wmask = RW0_wmask; // @[anonymous source 60:4]
endmodule
module data_arrays_0_0_ext( // @[anonymous source 66:2]
  input  [9:0]  RW0_addr, // @[anonymous source 67:4]
  input         RW0_clk, // @[anonymous source 68:4]
  input  [31:0] RW0_wdata, // @[anonymous source 69:4]
  output [31:0] RW0_rdata, // @[anonymous source 70:4]
  input         RW0_en, // @[anonymous source 71:4]
  input         RW0_wmode, // @[anonymous source 72:4]
  input         RW0_wmask // @[anonymous source 73:4]
);
  wire [9:0] mem_0_0_RW0_addr; // @[anonymous source 75:4]
  wire  mem_0_0_RW0_clk; // @[anonymous source 75:4]
  wire [31:0] mem_0_0_RW0_wdata; // @[anonymous source 75:4]
  wire [31:0] mem_0_0_RW0_rdata; // @[anonymous source 75:4]
  wire  mem_0_0_RW0_en; // @[anonymous source 75:4]
  wire  mem_0_0_RW0_wmode; // @[anonymous source 75:4]
  wire  mem_0_0_RW0_wmask; // @[anonymous source 75:4]
  wire [31:0] RW0_rdata_0_0 = mem_0_0_RW0_rdata; // @[anonymous source 78:4]
  wire [31:0] RW0_rdata_0 = RW0_rdata_0_0; // @[anonymous source 78:4]
  split_data_arrays_0_0_ext mem_0_0 ( // @[anonymous source 75:4]
    .RW0_addr(mem_0_0_RW0_addr),
    .RW0_clk(mem_0_0_RW0_clk),
    .RW0_wdata(mem_0_0_RW0_wdata),
    .RW0_rdata(mem_0_0_RW0_rdata),
    .RW0_en(mem_0_0_RW0_en),
    .RW0_wmode(mem_0_0_RW0_wmode),
    .RW0_wmask(mem_0_0_RW0_wmask)
  );
  assign RW0_rdata = mem_0_0_RW0_rdata; // @[anonymous source 78:4]
  assign mem_0_0_RW0_addr = RW0_addr; // @[anonymous source 77:4]
  assign mem_0_0_RW0_clk = RW0_clk; // @[anonymous source 76:4]
  assign mem_0_0_RW0_wdata = RW0_wdata; // @[anonymous source 79:4]
  assign mem_0_0_RW0_en = RW0_en; // @[anonymous source 82:4]
  assign mem_0_0_RW0_wmode = RW0_wmode; // @[anonymous source 81:4]
  assign mem_0_0_RW0_wmask = RW0_wmask; // @[anonymous source 80:4]
endmodule
module l2_tlb_ram_ext( // @[anonymous source 86:2]
  input  [9:0]  RW0_addr, // @[anonymous source 87:4]
  input         RW0_clk, // @[anonymous source 88:4]
  input  [36:0] RW0_wdata, // @[anonymous source 89:4]
  output [36:0] RW0_rdata, // @[anonymous source 90:4]
  input         RW0_en, // @[anonymous source 91:4]
  input         RW0_wmode // @[anonymous source 92:4]
);
  wire [9:0] mem_0_0_RW0_addr; // @[anonymous source 94:4]
  wire  mem_0_0_RW0_clk; // @[anonymous source 94:4]
  wire [36:0] mem_0_0_RW0_wdata; // @[anonymous source 94:4]
  wire [36:0] mem_0_0_RW0_rdata; // @[anonymous source 94:4]
  wire  mem_0_0_RW0_en; // @[anonymous source 94:4]
  wire  mem_0_0_RW0_wmode; // @[anonymous source 94:4]
  wire [36:0] RW0_rdata_0_0 = mem_0_0_RW0_rdata; // @[anonymous source 97:4]
  wire [36:0] RW0_rdata_0 = RW0_rdata_0_0; // @[anonymous source 97:4]
  split_l2_tlb_ram_ext mem_0_0 ( // @[anonymous source 94:4]
    .RW0_addr(mem_0_0_RW0_addr),
    .RW0_clk(mem_0_0_RW0_clk),
    .RW0_wdata(mem_0_0_RW0_wdata),
    .RW0_rdata(mem_0_0_RW0_rdata),
    .RW0_en(mem_0_0_RW0_en),
    .RW0_wmode(mem_0_0_RW0_wmode)
  );
  assign RW0_rdata = mem_0_0_RW0_rdata; // @[anonymous source 97:4]
  assign mem_0_0_RW0_addr = RW0_addr; // @[anonymous source 96:4]
  assign mem_0_0_RW0_clk = RW0_clk; // @[anonymous source 95:4]
  assign mem_0_0_RW0_wdata = RW0_wdata; // @[anonymous source 98:4]
  assign mem_0_0_RW0_en = RW0_en; // @[anonymous source 100:4]
  assign mem_0_0_RW0_wmode = RW0_wmode; // @[anonymous source 99:4]
endmodule
module split_data_arrays_0_ext( // @[anonymous source 104:2]
  input  [11:0] RW0_addr, // @[anonymous source 105:4]
  input         RW0_clk, // @[anonymous source 106:4]
  input  [7:0]  RW0_wdata, // @[anonymous source 107:4]
  output [7:0]  RW0_rdata, // @[anonymous source 108:4]
  input         RW0_en, // @[anonymous source 109:4]
  input         RW0_wmode, // @[anonymous source 110:4]
  input         RW0_wmask // @[anonymous source 111:4]
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] ram [0:4095]; // @[anonymous source 113:4]
  wire [7:0] ram_RW_0_r_data; // @[anonymous source 113:4]
  wire [11:0] ram_RW_0_r_addr; // @[anonymous source 113:4]
  wire [7:0] ram_RW_0_w_data; // @[anonymous source 113:4]
  wire [11:0] ram_RW_0_w_addr; // @[anonymous source 113:4]
  wire  ram_RW_0_w_mask; // @[anonymous source 113:4]
  wire  ram_RW_0_w_en; // @[anonymous source 113:4]
  reg  ram_RW_0_r_en_pipe_0;
  reg [11:0] ram_RW_0_r_addr_pipe_0;
  wire  _GEN_0 = ~RW0_wmode;
  wire  _GEN_1 = ~RW0_wmode;
  assign ram_RW_0_r_addr = ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_data = ram[ram_RW_0_r_addr]; // @[anonymous source 113:4]
  assign ram_RW_0_w_data = RW0_wdata;
  assign ram_RW_0_w_addr = RW0_addr;
  assign ram_RW_0_w_mask = RW0_wmask;
  assign ram_RW_0_w_en = RW0_en & RW0_wmode;
  assign RW0_rdata = ram_RW_0_r_data; // @[anonymous source 125:4]
  always @(posedge RW0_clk) begin
    if(ram_RW_0_w_en & ram_RW_0_w_mask) begin
      ram[ram_RW_0_w_addr] <= ram_RW_0_w_data; // @[anonymous source 113:4]
    end
    ram_RW_0_r_en_pipe_0 <= RW0_en & ~RW0_wmode;
    if (RW0_en & ~RW0_wmode) begin
      ram_RW_0_r_addr_pipe_0 <= RW0_addr;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 4096; initvar = initvar+1)
    ram[initvar] = _RAND_0[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_RW_0_r_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ram_RW_0_r_addr_pipe_0 = _RAND_2[11:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module split_tag_array_ext( // @[anonymous source 128:2]
  input  [5:0]  RW0_addr, // @[anonymous source 129:4]
  input         RW0_clk, // @[anonymous source 130:4]
  input  [20:0] RW0_wdata, // @[anonymous source 131:4]
  output [20:0] RW0_rdata, // @[anonymous source 132:4]
  input         RW0_en, // @[anonymous source 133:4]
  input         RW0_wmode, // @[anonymous source 134:4]
  input         RW0_wmask // @[anonymous source 135:4]
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [20:0] ram [0:63]; // @[anonymous source 137:4]
  wire [20:0] ram_RW_0_r_data; // @[anonymous source 137:4]
  wire [5:0] ram_RW_0_r_addr; // @[anonymous source 137:4]
  wire [20:0] ram_RW_0_w_data; // @[anonymous source 137:4]
  wire [5:0] ram_RW_0_w_addr; // @[anonymous source 137:4]
  wire  ram_RW_0_w_mask; // @[anonymous source 137:4]
  wire  ram_RW_0_w_en; // @[anonymous source 137:4]
  reg  ram_RW_0_r_en_pipe_0;
  reg [5:0] ram_RW_0_r_addr_pipe_0;
  wire  _GEN_0 = ~RW0_wmode;
  wire  _GEN_1 = ~RW0_wmode;
  assign ram_RW_0_r_addr = ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_data = ram[ram_RW_0_r_addr]; // @[anonymous source 137:4]
  assign ram_RW_0_w_data = RW0_wdata;
  assign ram_RW_0_w_addr = RW0_addr;
  assign ram_RW_0_w_mask = RW0_wmask;
  assign ram_RW_0_w_en = RW0_en & RW0_wmode;
  assign RW0_rdata = ram_RW_0_r_data; // @[anonymous source 149:4]
  always @(posedge RW0_clk) begin
    if(ram_RW_0_w_en & ram_RW_0_w_mask) begin
      ram[ram_RW_0_w_addr] <= ram_RW_0_w_data; // @[anonymous source 137:4]
    end
    ram_RW_0_r_en_pipe_0 <= RW0_en & ~RW0_wmode;
    if (RW0_en & ~RW0_wmode) begin
      ram_RW_0_r_addr_pipe_0 <= RW0_addr;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    ram[initvar] = _RAND_0[20:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_RW_0_r_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ram_RW_0_r_addr_pipe_0 = _RAND_2[5:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module split_data_arrays_0_0_ext( // @[anonymous source 152:2]
  input  [9:0]  RW0_addr, // @[anonymous source 153:4]
  input         RW0_clk, // @[anonymous source 154:4]
  input  [31:0] RW0_wdata, // @[anonymous source 155:4]
  output [31:0] RW0_rdata, // @[anonymous source 156:4]
  input         RW0_en, // @[anonymous source 157:4]
  input         RW0_wmode, // @[anonymous source 158:4]
  input         RW0_wmask // @[anonymous source 159:4]
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] ram [0:1023]; // @[anonymous source 161:4]
  wire [31:0] ram_RW_0_r_data; // @[anonymous source 161:4]
  wire [9:0] ram_RW_0_r_addr; // @[anonymous source 161:4]
  wire [31:0] ram_RW_0_w_data; // @[anonymous source 161:4]
  wire [9:0] ram_RW_0_w_addr; // @[anonymous source 161:4]
  wire  ram_RW_0_w_mask; // @[anonymous source 161:4]
  wire  ram_RW_0_w_en; // @[anonymous source 161:4]
  reg  ram_RW_0_r_en_pipe_0;
  reg [9:0] ram_RW_0_r_addr_pipe_0;
  wire  _GEN_0 = ~RW0_wmode;
  wire  _GEN_1 = ~RW0_wmode;
  assign ram_RW_0_r_addr = ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_data = ram[ram_RW_0_r_addr]; // @[anonymous source 161:4]
  assign ram_RW_0_w_data = RW0_wdata;
  assign ram_RW_0_w_addr = RW0_addr;
  assign ram_RW_0_w_mask = RW0_wmask;
  assign ram_RW_0_w_en = RW0_en & RW0_wmode;
  assign RW0_rdata = ram_RW_0_r_data; // @[anonymous source 173:4]
  always @(posedge RW0_clk) begin
    if(ram_RW_0_w_en & ram_RW_0_w_mask) begin
      ram[ram_RW_0_w_addr] <= ram_RW_0_w_data; // @[anonymous source 161:4]
    end
    ram_RW_0_r_en_pipe_0 <= RW0_en & ~RW0_wmode;
    if (RW0_en & ~RW0_wmode) begin
      ram_RW_0_r_addr_pipe_0 <= RW0_addr;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    ram[initvar] = _RAND_0[31:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_RW_0_r_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ram_RW_0_r_addr_pipe_0 = _RAND_2[9:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module split_l2_tlb_ram_ext( // @[anonymous source 176:2]
  input  [9:0]  RW0_addr, // @[anonymous source 177:4]
  input         RW0_clk, // @[anonymous source 178:4]
  input  [36:0] RW0_wdata, // @[anonymous source 179:4]
  output [36:0] RW0_rdata, // @[anonymous source 180:4]
  input         RW0_en, // @[anonymous source 181:4]
  input         RW0_wmode // @[anonymous source 182:4]
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [36:0] ram [0:1023]; // @[anonymous source 184:4]
  wire [36:0] ram_RW_0_r_data; // @[anonymous source 184:4]
  wire [9:0] ram_RW_0_r_addr; // @[anonymous source 184:4]
  wire [36:0] ram_RW_0_w_data; // @[anonymous source 184:4]
  wire [9:0] ram_RW_0_w_addr; // @[anonymous source 184:4]
  wire  ram_RW_0_w_mask; // @[anonymous source 184:4]
  wire  ram_RW_0_w_en; // @[anonymous source 184:4]
  reg  ram_RW_0_r_en_pipe_0;
  reg [9:0] ram_RW_0_r_addr_pipe_0;
  wire  _GEN_0 = ~RW0_wmode;
  wire  _GEN_1 = ~RW0_wmode;
  assign ram_RW_0_r_addr = ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_data = ram[ram_RW_0_r_addr]; // @[anonymous source 184:4]
  assign ram_RW_0_w_data = RW0_wdata;
  assign ram_RW_0_w_addr = RW0_addr;
  assign ram_RW_0_w_mask = 1'h1;
  assign ram_RW_0_w_en = RW0_en & RW0_wmode;
  assign RW0_rdata = ram_RW_0_r_data; // @[anonymous source 196:4]
  always @(posedge RW0_clk) begin
    if(ram_RW_0_w_en & ram_RW_0_w_mask) begin
      ram[ram_RW_0_w_addr] <= ram_RW_0_w_data; // @[anonymous source 184:4]
    end
    ram_RW_0_r_en_pipe_0 <= RW0_en & ~RW0_wmode;
    if (RW0_en & ~RW0_wmode) begin
      ram_RW_0_r_addr_pipe_0 <= RW0_addr;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    ram[initvar] = _RAND_0[36:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_RW_0_r_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ram_RW_0_r_addr_pipe_0 = _RAND_2[9:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
