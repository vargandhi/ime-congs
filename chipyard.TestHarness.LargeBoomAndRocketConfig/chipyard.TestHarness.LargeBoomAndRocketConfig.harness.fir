circuit TestHarness : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@2.0]
  extmodule ChipTop : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593527.2]
    input debug_clock : Clock @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    input debug_reset : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    output debug_clockeddmi_dmi_req_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    input debug_clockeddmi_dmi_req_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    input debug_clockeddmi_dmi_req_bits_addr : UInt<7> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    input debug_clockeddmi_dmi_req_bits_data : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    input debug_clockeddmi_dmi_req_bits_op : UInt<2> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    input debug_clockeddmi_dmi_resp_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    output debug_clockeddmi_dmi_resp_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    output debug_clockeddmi_dmi_resp_bits_data : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    output debug_clockeddmi_dmi_resp_bits_resp : UInt<2> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    input debug_clockeddmi_dmiClock : Clock @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    input debug_clockeddmi_dmiReset : AsyncReset @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    output debug_ndreset : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    output debug_dmactive : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    input debug_dmactiveAck : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593529.4]
    input resetctrl_hartIsInReset_0 : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593530.4]
    input resetctrl_hartIsInReset_1 : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593530.4]
    output serial_in_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593532.4]
    input serial_in_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593532.4]
    input serial_in_bits : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593532.4]
    input serial_out_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593532.4]
    output serial_out_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593532.4]
    output serial_out_bits : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593532.4]
    input mem_axi4_aw_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_aw_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_aw_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_aw_bits_addr : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_aw_bits_len : UInt<8> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_aw_bits_size : UInt<3> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_aw_bits_burst : UInt<2> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_aw_bits_lock : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_aw_bits_cache : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_aw_bits_prot : UInt<3> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_aw_bits_qos : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    input mem_axi4_w_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_w_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_w_bits_data : UInt<64> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_w_bits_strb : UInt<8> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_w_bits_last : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_b_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    input mem_axi4_b_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    input mem_axi4_b_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    input mem_axi4_b_bits_resp : UInt<2> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    input mem_axi4_ar_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_ar_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_ar_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_ar_bits_addr : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_ar_bits_len : UInt<8> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_ar_bits_size : UInt<3> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_ar_bits_burst : UInt<2> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_ar_bits_lock : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_ar_bits_cache : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_ar_bits_prot : UInt<3> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_ar_bits_qos : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output mem_axi4_r_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    input mem_axi4_r_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    input mem_axi4_r_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    input mem_axi4_r_bits_data : UInt<64> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    input mem_axi4_r_bits_resp : UInt<2> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    input mem_axi4_r_bits_last : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593533.4]
    output uart_0_txd : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593534.4]
    input uart_0_rxd : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593534.4]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593535.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@593536.4]
  
    defname = ChipTop
    

  extmodule SimSerial : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597117.2]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597118.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597119.4]
    input serial_in_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597120.4]
    output serial_in_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597120.4]
    output serial_in_bits : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597120.4]
    output serial_out_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597120.4]
    input serial_out_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597120.4]
    input serial_out_bits : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597120.4]
    output exit : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597121.4]
  
    defname = SimSerial
    

  extmodule SimDRAM_inTestHarness : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597126.2]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597127.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597128.4]
    output axi_aw_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_aw_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_aw_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_aw_bits_addr : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_aw_bits_len : UInt<8> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_aw_bits_size : UInt<3> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_aw_bits_burst : UInt<2> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_aw_bits_lock : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_aw_bits_cache : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_aw_bits_prot : UInt<3> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_aw_bits_qos : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    output axi_w_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_w_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_w_bits_data : UInt<64> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_w_bits_strb : UInt<8> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_w_bits_last : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_b_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    output axi_b_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    output axi_b_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    output axi_b_bits_resp : UInt<2> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    output axi_ar_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_ar_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_ar_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_ar_bits_addr : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_ar_bits_len : UInt<8> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_ar_bits_size : UInt<3> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_ar_bits_burst : UInt<2> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_ar_bits_lock : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_ar_bits_cache : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_ar_bits_prot : UInt<3> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_ar_bits_qos : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    input axi_r_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    output axi_r_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    output axi_r_bits_id : UInt<4> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    output axi_r_bits_data : UInt<64> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    output axi_r_bits_resp : UInt<2> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
    output axi_r_bits_last : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597129.4]
  
    defname = SimDRAM
    parameter LINE_SIZE = 64
    parameter ID_BITS = 4
    parameter ADDR_BITS = 32
    parameter MEM_SIZE = 268435456
    parameter DATA_BITS = 64

  module Queue_45_inTestHarness : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597138.2]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597139.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597140.4]
    output io_enq_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597141.4]
    input io_enq_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597141.4]
    input io_enq_bits : UInt<8> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597141.4]
    input io_deq_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597141.4]
    output io_deq_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597141.4]
    output io_deq_bits : UInt<8> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597141.4]
  
    mem ram : @[Decoupled.scala 209:16:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597143.4]
      data-type => UInt<8>
      depth => 128
      read-latency => 0
      write-latency => 1
      reader => _T_11
      writer => _T_3
      read-under-write => undefined
    reg enq_ptr_value : UInt<7>, clock with :
      reset => (UInt<1>("h0"), enq_ptr_value) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597144.4]
    reg deq_ptr_value : UInt<7>, clock with :
      reset => (UInt<1>("h0"), deq_ptr_value) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597145.4]
    reg maybe_full : UInt<1>, clock with :
      reset => (UInt<1>("h0"), maybe_full) @[Decoupled.scala 212:27:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597146.4]
    node ptr_match = eq(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 214:33:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597147.4]
    node _T = not(maybe_full) @[Decoupled.scala 215:28:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597148.4]
    node empty = and(ptr_match, _T) @[Decoupled.scala 215:25:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597149.4]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 216:24:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597150.4]
    node do_enq = and(io_enq_ready, io_enq_valid) @[Decoupled.scala 40:37:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597151.4]
    node do_deq = and(io_deq_ready, io_deq_valid) @[Decoupled.scala 40:37:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597154.4]
    skip
    node _T_4 = add(enq_ptr_value, UInt<7>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597161.6]
    node _T_5 = tail(_T_4, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597162.6]
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_5 = mux(do_enq, _T_5, enq_ptr_value) @[Decoupled.scala 220:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597157.4]
    skip
    node _T_6 = add(deq_ptr_value, UInt<7>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597167.6]
    node _T_7 = tail(_T_6, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597168.6]
    skip
    node _GEN_6 = mux(do_deq, _T_7, deq_ptr_value) @[Decoupled.scala 224:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597165.4]
    node _T_8 = neq(do_enq, do_deq) @[Decoupled.scala 227:16:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597171.4]
    node _GEN_7 = mux(_T_8, do_enq, maybe_full) @[Decoupled.scala 227:28:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597172.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    io_enq_ready <= not(full) @[Decoupled.scala 232:16:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597178.4]
    io_deq_valid <= not(empty) @[Decoupled.scala 231:16:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597176.4]
    io_deq_bits <= ram._T_11.data @[Decoupled.scala 233:15:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597180.4]
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    enq_ptr_value <= mux(reset, UInt<7>("h0"), _GEN_5) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597163.6]
    deq_ptr_value <= mux(reset, UInt<7>("h0"), _GEN_6) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597169.6]
    maybe_full <= mux(reset, UInt<1>("h0"), _GEN_7) @[Decoupled.scala 228:16:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597173.6]
    ram._T_11.en <= UInt<1>("h1")
    ram._T_11.addr <= deq_ptr_value
    ram._T_11.clk <= clock
    ram._T_3.en <= and(io_enq_ready, io_enq_valid)
    ram._T_3.addr <= enq_ptr_value
    ram._T_3.mask <= UInt<1>("h1")
    ram._T_3.data <= io_enq_bits
    ram._T_3.clk <= clock

  extmodule SimUART_inTestHarness : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597238.2]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597239.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597240.4]
    input serial_in_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597241.4]
    output serial_in_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597241.4]
    output serial_in_bits : UInt<8> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597241.4]
    output serial_out_ready : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597241.4]
    input serial_out_valid : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597241.4]
    input serial_out_bits : UInt<8> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597241.4]
  
    defname = SimUART
    parameter UARTNO = 0

  module UARTAdapter_inTestHarness : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597246.2]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597247.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597248.4]
    input io_uart_txd : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597249.4]
    output io_uart_rxd : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597249.4]
  
    inst txfifo of Queue_45_inTestHarness @[UARTAdapter.scala 32:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597251.4]
    inst rxfifo of Queue_45_inTestHarness @[UARTAdapter.scala 33:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597254.4]
    inst sim of SimUART_inTestHarness @[UARTAdapter.scala 108:19:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597403.4]
    reg txState : UInt<2>, clock with :
      reset => (UInt<1>("h0"), txState) @[UARTAdapter.scala 38:24:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597257.4]
    reg txData : UInt<8>, clock with :
      reset => (UInt<1>("h0"), txData) @[UARTAdapter.scala 39:19:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597258.4]
    node _T = eq(txState, UInt<2>("h2")) @[UARTAdapter.scala 41:49:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597259.4]
    node _T_1 = and(_T, txfifo.io_enq_ready) @[UARTAdapter.scala 41:61:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597260.4]
    reg txDataIdx : UInt<3>, clock with :
      reset => (UInt<1>("h0"), txDataIdx) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597261.4]
    node _T_2 = eq(txDataIdx, UInt<3>("h7")) @[Counter.scala 38:24:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597265.6]
    node _T_3 = add(txDataIdx, UInt<3>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597266.6]
    node _T_4 = tail(_T_3, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597267.6]
    node _GEN_0 = mux(_T_1, _T_4, txDataIdx) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597264.4]
    node txDataWrap = and(_T_1, _T_2) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597264.4]
    node _T_5 = eq(txState, UInt<2>("h1")) @[UARTAdapter.scala 43:51:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597271.4]
    node _T_6 = and(_T_5, txfifo.io_enq_ready) @[UARTAdapter.scala 43:63:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597272.4]
    reg txBaudCount : UInt<10>, clock with :
      reset => (UInt<1>("h0"), txBaudCount) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597273.4]
    node _T_7 = eq(txBaudCount, UInt<10>("h363")) @[Counter.scala 38:24:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597277.6]
    node _T_8 = add(txBaudCount, UInt<10>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597278.6]
    node _T_9 = tail(_T_8, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597279.6]
    node _GEN_2 = mux(_T_7, UInt<10>("h0"), _T_9) @[Counter.scala 41:21:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597281.6]
    node _GEN_3 = mux(_T_6, _GEN_2, txBaudCount) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597276.4]
    node txBaudWrap = and(_T_6, _T_7) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597276.4]
    node _T_10 = eq(txState, UInt<2>("h0")) @[UARTAdapter.scala 44:53:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597286.4]
    node _T_11 = not(io_uart_txd) @[UARTAdapter.scala 44:80:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597287.4]
    node _T_12 = and(_T_10, _T_11) @[UARTAdapter.scala 44:65:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597288.4]
    node _T_13 = and(_T_12, txfifo.io_enq_ready) @[UARTAdapter.scala 44:88:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597289.4]
    reg txSlackCount : UInt<2>, clock with :
      reset => (UInt<1>("h0"), txSlackCount) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597290.4]
    node _T_14 = eq(txSlackCount, UInt<2>("h3")) @[Counter.scala 38:24:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597294.6]
    node _T_15 = add(txSlackCount, UInt<2>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597295.6]
    node _T_16 = tail(_T_15, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597296.6]
    node _GEN_5 = mux(_T_13, _T_16, txSlackCount) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597293.4]
    node txSlackWrap = and(_T_13, _T_14) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597293.4]
    node _T_17 = eq(UInt<2>("h0"), txState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597300.4]
    skip
    node _GEN_7 = mux(txSlackWrap, UInt<8>("h0"), txData) @[UARTAdapter.scala 48:25:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597302.6]
    node _GEN_8 = mux(txSlackWrap, UInt<2>("h1"), txState) @[UARTAdapter.scala 48:25:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597302.6]
    node _T_18 = eq(UInt<2>("h1"), txState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597308.6]
    skip
    node _GEN_9 = mux(txBaudWrap, UInt<2>("h2"), txState) @[UARTAdapter.scala 54:24:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597310.8]
    node _T_19 = eq(UInt<2>("h2"), txState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597315.8]
    node _GEN_35 = pad(io_uart_txd, 8) @[UARTAdapter.scala 60:41:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597318.12]
    node _T_20 = dshlw(_GEN_35, txDataIdx) @[UARTAdapter.scala 60:41:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597318.12]
    node _T_21 = or(txData, _T_20) @[UARTAdapter.scala 60:26:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597319.12]
    node _GEN_10 = mux(txfifo.io_enq_ready, _T_21, txData) @[UARTAdapter.scala 59:34:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597317.10]
    skip
    node _T_23 = mux(io_uart_txd, UInt<2>("h0"), UInt<2>("h3")) @[UARTAdapter.scala 63:23:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597324.12]
    node _GEN_11 = mux(txfifo.io_enq_ready, UInt<2>("h1"), txState) @[UARTAdapter.scala 64:39:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597328.12]
    skip
    node _GEN_12 = mux(txDataWrap, _T_23, _GEN_11) @[UARTAdapter.scala 62:24:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597322.10]
    node _T_24 = eq(UInt<2>("h3"), txState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597333.10]
    skip
    node _T_26 = and(io_uart_txd, txfifo.io_enq_ready) @[UARTAdapter.scala 69:32:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597336.12]
    node _GEN_13 = mux(_T_26, UInt<2>("h0"), txState) @[UARTAdapter.scala 69:56:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597337.12]
    node _GEN_14 = mux(_T_24, _GEN_13, txState) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597334.10]
    node _GEN_15 = mux(_T_19, _GEN_10, txData) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597316.8]
    node _GEN_16 = mux(_T_19, _GEN_12, _GEN_14) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597316.8]
    node _GEN_17 = mux(_T_18, _GEN_9, _GEN_16) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597309.6]
    node _GEN_18 = mux(_T_18, txData, _GEN_15) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597309.6]
    skip
    node _GEN_20 = mux(_T_17, _GEN_8, _GEN_17) @[Conditional.scala 40:58:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597301.4]
    reg rxState : UInt<2>, clock with :
      reset => (UInt<1>("h0"), rxState) @[UARTAdapter.scala 79:24:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597343.4]
    reg rxBaudCount : UInt<10>, clock with :
      reset => (UInt<1>("h0"), rxBaudCount) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597344.4]
    node _T_27 = eq(rxBaudCount, UInt<10>("h363")) @[Counter.scala 38:24:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597348.6]
    node _T_28 = add(rxBaudCount, UInt<10>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597349.6]
    node _T_29 = tail(_T_28, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597350.6]
    node _GEN_21 = mux(_T_27, UInt<10>("h0"), _T_29) @[Counter.scala 41:21:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597352.6]
    node _GEN_22 = mux(txfifo.io_enq_ready, _GEN_21, rxBaudCount) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597347.4]
    node rxBaudWrap = and(txfifo.io_enq_ready, _T_27) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597347.4]
    node _T_30 = eq(rxState, UInt<2>("h2")) @[UARTAdapter.scala 83:49:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597357.4]
    node _T_31 = and(_T_30, txfifo.io_enq_ready) @[UARTAdapter.scala 83:61:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597358.4]
    skip
    node _T_32 = and(_T_31, rxBaudWrap) @[UARTAdapter.scala 83:84:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597359.4]
    reg rxDataIdx : UInt<3>, clock with :
      reset => (UInt<1>("h0"), rxDataIdx) @[Counter.scala 29:33:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597360.4]
    node _T_33 = eq(rxDataIdx, UInt<3>("h7")) @[Counter.scala 38:24:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597364.6]
    node _T_34 = add(rxDataIdx, UInt<3>("h1")) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597365.6]
    node _T_35 = tail(_T_34, 1) @[Counter.scala 39:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597366.6]
    node _GEN_24 = mux(_T_32, _T_35, rxDataIdx) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597363.4]
    node rxDataWrap = and(_T_32, _T_33) @[Counter.scala 67:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597363.4]
    node _T_36 = eq(UInt<2>("h0"), rxState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597371.4]
    node _T_37 = and(rxBaudWrap, rxfifo.io_deq_valid) @[UARTAdapter.scala 89:24:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597374.6]
    node _GEN_26 = mux(_T_37, UInt<2>("h1"), rxState) @[UARTAdapter.scala 89:48:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597375.6]
    node _T_38 = eq(UInt<2>("h1"), rxState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597380.6]
    node _GEN_27 = mux(rxBaudWrap, UInt<2>("h2"), rxState) @[UARTAdapter.scala 95:24:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597383.8]
    node _T_39 = eq(UInt<2>("h2"), rxState) @[Conditional.scala 37:30:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597388.8]
    node _T_40 = dshr(rxfifo.io_deq_bits, rxDataIdx) @[UARTAdapter.scala 100:42:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597390.10]
    node _T_41 = bits(_T_40, 0, 0) @[UARTAdapter.scala 100:55:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597391.10]
    skip
    node _T_42 = and(rxDataWrap, rxBaudWrap) @[UARTAdapter.scala 101:23:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597393.10]
    node _GEN_28 = mux(_T_42, UInt<2>("h0"), rxState) @[UARTAdapter.scala 101:38:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597394.10]
    node _GEN_29 = mux(_T_39, _T_41, UInt<1>("h1")) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597389.8]
    node _GEN_30 = mux(_T_39, _GEN_28, rxState) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597389.8]
    node _GEN_31 = mux(_T_38, UInt<1>("h0"), _GEN_29) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597381.6]
    node _GEN_32 = mux(_T_38, _GEN_27, _GEN_30) @[Conditional.scala 39:67:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597381.6]
    skip
    node _GEN_34 = mux(_T_36, _GEN_26, _GEN_32) @[Conditional.scala 40:58:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597372.4]
    skip
    node _T_44 = and(_T_30, rxDataWrap) @[UARTAdapter.scala 106:48:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597399.4]
    node _T_45 = and(_T_44, rxBaudWrap) @[UARTAdapter.scala 106:62:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597400.4]
    skip
    skip
    io_uart_rxd <= or(_T_36, _GEN_31) @[UARTAdapter.scala 85:15:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597370.4 UARTAdapter.scala 88:19:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597373.6 UARTAdapter.scala 94:19:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597382.8 UARTAdapter.scala 100:19:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597392.10]
    txfifo.clock <= clock @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597252.4]
    txfifo.reset <= reset @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597253.4]
    txfifo.io_enq_valid <= and(_T_1, _T_2) @[UARTAdapter.scala 76:23:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597342.4]
    txfifo.io_enq_bits <= txData @[UARTAdapter.scala 75:23:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597341.4]
    txfifo.io_deq_ready <= sim.serial_out_ready @[UARTAdapter.scala 115:23:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597412.4]
    rxfifo.clock <= clock @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597255.4]
    rxfifo.reset <= reset @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597256.4]
    rxfifo.io_enq_valid <= sim.serial_in_valid @[UARTAdapter.scala 118:23:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597414.4]
    rxfifo.io_enq_bits <= sim.serial_in_bits @[UARTAdapter.scala 117:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597413.4]
    rxfifo.io_deq_ready <= and(_T_45, txfifo.io_enq_ready) @[UARTAdapter.scala 106:23:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597402.4]
    txState <= mux(reset, UInt<2>("h0"), _GEN_20) @[UARTAdapter.scala 50:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597304.8 UARTAdapter.scala 55:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597311.10 UARTAdapter.scala 63:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597325.12 UARTAdapter.scala 65:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597329.14 UARTAdapter.scala 70:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597338.14]
    txData <= mux(_T_17, _GEN_7, _GEN_18) @[UARTAdapter.scala 49:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597303.8 UARTAdapter.scala 60:16:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597320.12]
    txDataIdx <= mux(reset, UInt<3>("h0"), _GEN_0) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597268.6]
    txBaudCount <= mux(reset, UInt<10>("h0"), _GEN_3) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597280.6 Counter.scala 41:29:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597282.8]
    txSlackCount <= mux(reset, UInt<2>("h0"), _GEN_5) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597297.6]
    rxState <= mux(reset, UInt<2>("h0"), _GEN_34) @[UARTAdapter.scala 90:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597376.8 UARTAdapter.scala 96:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597384.10 UARTAdapter.scala 102:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597395.12]
    rxBaudCount <= mux(reset, UInt<10>("h0"), _GEN_22) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597351.6 Counter.scala 41:29:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597353.8]
    rxDataIdx <= mux(reset, UInt<3>("h0"), _GEN_24) @[Counter.scala 39:13:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597367.6]
    sim.clock <= clock @[UARTAdapter.scala 110:16:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597407.4]
    sim.reset <= reset @[UARTAdapter.scala 111:16:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597409.4]
    sim.serial_in_ready <= rxfifo.io_enq_ready @[UARTAdapter.scala 119:26:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597415.4]
    sim.serial_out_valid <= txfifo.io_deq_valid @[UARTAdapter.scala 114:27:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597411.4]
    sim.serial_out_bits <= txfifo.io_deq_bits @[UARTAdapter.scala 113:26:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597410.4]

  module TestHarness : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597417.2]
    input clock : Clock @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597418.4]
    input reset : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597419.4]
    output io_success : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597420.4]
  
    inst dut of ChipTop @[TestHarness.scala 14:100:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597422.4]
    inst SimSerial of SimSerial @[SerialAdapter.scala 17:23:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597445.4]
    inst SimDRAM of SimDRAM_inTestHarness @[IOBinders.scala 288:25:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597461.4]
    inst uart_sim_0 of UARTAdapter_inTestHarness @[UARTAdapter.scala 132:28:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597468.4]
    skip
    skip
    skip
    skip
    skip
    skip
    io_success <= SimSerial.exit @[TestHarness.scala 26:14:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597423.4 IOBinders.scala 384:39:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597459.6]
    dut.debug_clock <= clock @[Periphery.scala 308:19:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597429.4 IOBinders.scala 345:17:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597442.4]
    dut.debug_reset <= UInt<1>("h1") @[Periphery.scala 309:19:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597430.4]
    dut.debug_clockeddmi_dmi_req_valid <= UInt<1>("h0") @[Periphery.scala 323:25:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597431.4]
    dut.debug_clockeddmi_dmi_req_bits_addr <= UInt<7>("h0")
    dut.debug_clockeddmi_dmi_req_bits_data <= UInt<32>("h0")
    dut.debug_clockeddmi_dmi_req_bits_op <= UInt<2>("h0")
    dut.debug_clockeddmi_dmi_resp_ready <= UInt<1>("h1") @[Periphery.scala 324:26:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597432.4]
    dut.debug_clockeddmi_dmiClock <= clock @[Periphery.scala 325:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597434.4 IOBinders.scala 343:85:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597440.4]
    dut.debug_clockeddmi_dmiReset <= asAsyncReset(UInt<1>("h1")) @[Periphery.scala 326:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597436.4]
    dut.debug_dmactiveAck <= UInt<1>("h0")
    dut.resetctrl_hartIsInReset_0 <= UInt<1>("h0") @[Periphery.scala 306:59:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597426.4]
    dut.resetctrl_hartIsInReset_1 <= UInt<1>("h0") @[Periphery.scala 306:59:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597427.4]
    dut.serial_in_valid <= SimSerial.serial_in_valid @[SerialAdapter.scala 20:21:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597456.4]
    dut.serial_in_bits <= SimSerial.serial_in_bits @[SerialAdapter.scala 20:21:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597455.4]
    dut.serial_out_ready <= SimSerial.serial_out_ready @[SerialAdapter.scala 20:21:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597454.4]
    dut.mem_axi4_aw_ready <= SimDRAM.axi_aw_ready @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    dut.mem_axi4_w_ready <= SimDRAM.axi_w_ready @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    dut.mem_axi4_b_valid <= SimDRAM.axi_b_valid @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    dut.mem_axi4_b_bits_id <= SimDRAM.axi_b_bits_id @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    dut.mem_axi4_b_bits_resp <= SimDRAM.axi_b_bits_resp @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    dut.mem_axi4_ar_ready <= SimDRAM.axi_ar_ready @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    dut.mem_axi4_r_valid <= SimDRAM.axi_r_valid @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    dut.mem_axi4_r_bits_id <= SimDRAM.axi_r_bits_id @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    dut.mem_axi4_r_bits_data <= SimDRAM.axi_r_bits_data @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    dut.mem_axi4_r_bits_resp <= SimDRAM.axi_r_bits_resp @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    dut.mem_axi4_r_bits_last <= SimDRAM.axi_r_bits_last @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    dut.uart_0_rxd <= uart_sim_0.io_uart_rxd @[UARTAdapter.scala 135:18:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597472.4]
    dut.clock <= clock @[ChipTop.scala 111:11:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597473.4]
    dut.reset <= reset @[ChipTop.scala 114:11:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597474.4]
    SimSerial.clock <= clock @[SerialAdapter.scala 18:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597450.4]
    SimSerial.reset <= reset @[SerialAdapter.scala 19:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597451.4]
    SimSerial.serial_in_ready <= dut.serial_in_ready @[SerialAdapter.scala 20:21:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597457.4]
    SimSerial.serial_out_valid <= dut.serial_out_valid @[SerialAdapter.scala 20:21:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597453.4]
    SimSerial.serial_out_bits <= dut.serial_out_bits @[SerialAdapter.scala 20:21:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597452.4]
    SimDRAM.clock <= clock @[IOBinders.scala 290:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597466.4]
    SimDRAM.reset <= reset @[IOBinders.scala 291:22:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597467.4]
    SimDRAM.axi_aw_valid <= dut.mem_axi4_aw_valid @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_aw_bits_id <= dut.mem_axi4_aw_bits_id @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_aw_bits_addr <= dut.mem_axi4_aw_bits_addr @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_aw_bits_len <= dut.mem_axi4_aw_bits_len @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_aw_bits_size <= dut.mem_axi4_aw_bits_size @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_aw_bits_burst <= dut.mem_axi4_aw_bits_burst @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_aw_bits_lock <= dut.mem_axi4_aw_bits_lock @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_aw_bits_cache <= dut.mem_axi4_aw_bits_cache @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_aw_bits_prot <= dut.mem_axi4_aw_bits_prot @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_aw_bits_qos <= dut.mem_axi4_aw_bits_qos @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_w_valid <= dut.mem_axi4_w_valid @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_w_bits_data <= dut.mem_axi4_w_bits_data @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_w_bits_strb <= dut.mem_axi4_w_bits_strb @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_w_bits_last <= dut.mem_axi4_w_bits_last @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_b_ready <= dut.mem_axi4_b_ready @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_ar_valid <= dut.mem_axi4_ar_valid @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_ar_bits_id <= dut.mem_axi4_ar_bits_id @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_ar_bits_addr <= dut.mem_axi4_ar_bits_addr @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_ar_bits_len <= dut.mem_axi4_ar_bits_len @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_ar_bits_size <= dut.mem_axi4_ar_bits_size @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_ar_bits_burst <= dut.mem_axi4_ar_bits_burst @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_ar_bits_lock <= dut.mem_axi4_ar_bits_lock @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_ar_bits_cache <= dut.mem_axi4_ar_bits_cache @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_ar_bits_prot <= dut.mem_axi4_ar_bits_prot @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_ar_bits_qos <= dut.mem_axi4_ar_bits_qos @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    SimDRAM.axi_r_ready <= dut.mem_axi4_r_ready @[IOBinders.scala 289:20:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597465.4]
    uart_sim_0.clock <= clock @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597469.4]
    uart_sim_0.reset <= reset @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597470.4]
    uart_sim_0.io_uart_txd <= dut.uart_0_txd @[UARTAdapter.scala 134:28:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@597471.4]

  extmodule plusarg_reader_inTestHarness : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@122.2]
    output out : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@123.4]
  
    defname = plusarg_reader
    parameter FORMAT = "tilelink_timeout=%d"
    parameter DEFAULT = 0
    parameter WIDTH = 32

  extmodule plusarg_reader_66_inTestHarness : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@580465.2]
    output out : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@580466.4]
  
    defname = plusarg_reader
    parameter FORMAT = "max_core_cycles=%d"
    parameter DEFAULT = 0
    parameter WIDTH = 32

  extmodule plusarg_reader_70_inTestHarness : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@588263.2]
    output out : UInt<32> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@588264.4]
  
    defname = plusarg_reader
    parameter FORMAT = "uart_tx=%d"
    parameter DEFAULT = 1
    parameter WIDTH = 32

  extmodule GenericDigitalInIOCell_inTestHarness : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@589991.2]
    input pad : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@589992.4]
    output i : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@589993.4]
    input ie : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@589994.4]
  
    defname = GenericDigitalInIOCell
    

  extmodule GenericDigitalOutIOCell_inTestHarness : @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@589999.2]
    output pad : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@590000.4]
    input o : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@590001.4]
    input oe : UInt<1> @[:chipyard.TestHarness.LargeBoomAndRocketConfig.fir@590002.4]
  
    defname = GenericDigitalOutIOCell
    

  extmodule cc_dir_ext_inTestHarness :
    input RW0_addr : UInt<10>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<136>
    output RW0_rdata : UInt<136>
    input RW0_wmask : UInt<8>
  
    defname = cc_dir_ext
    

  extmodule cc_banks_0_ext_inTestHarness :
    input RW0_addr : UInt<13>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
  
    defname = cc_banks_0_ext
    

  extmodule tag_array_ext_inTestHarness :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<176>
    output RW0_rdata : UInt<176>
    input RW0_wmask : UInt<8>
  
    defname = tag_array_ext
    

  extmodule array_0_0_ext_inTestHarness :
    input R0_addr : UInt<8>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<128>
    input W0_addr : UInt<8>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<128>
    input W0_mask : UInt<2>
  
    defname = array_0_0_ext
    

  extmodule tag_array_0_ext_inTestHarness :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<160>
    output RW0_rdata : UInt<160>
    input RW0_wmask : UInt<8>
  
    defname = tag_array_0_ext
    

  extmodule dataArrayB0Way_0_ext_inTestHarness :
    input RW0_addr : UInt<8>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
  
    defname = dataArrayB0Way_0_ext
    

  extmodule hi_us_ext_inTestHarness :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<4>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<4>
    input W0_mask : UInt<4>
  
    defname = hi_us_ext
    

  extmodule table_ext_inTestHarness :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<44>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<44>
    input W0_mask : UInt<4>
  
    defname = table_ext
    

  extmodule hi_us_0_ext_inTestHarness :
    input R0_addr : UInt<8>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<4>
    input W0_addr : UInt<8>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<4>
    input W0_mask : UInt<4>
  
    defname = hi_us_0_ext
    

  extmodule table_0_ext_inTestHarness :
    input R0_addr : UInt<8>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<48>
    input W0_addr : UInt<8>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<48>
    input W0_mask : UInt<4>
  
    defname = table_0_ext
    

  extmodule table_1_ext_inTestHarness :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<52>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<52>
    input W0_mask : UInt<4>
  
    defname = table_1_ext
    

  extmodule meta_0_ext_inTestHarness :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<120>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<120>
    input W0_mask : UInt<4>
  
    defname = meta_0_ext
    

  extmodule btb_0_ext_inTestHarness :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<56>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<56>
    input W0_mask : UInt<4>
  
    defname = btb_0_ext
    

  extmodule ebtb_ext_inTestHarness :
    input R0_addr : UInt<7>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<40>
    input W0_addr : UInt<7>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<40>
  
    defname = ebtb_ext
    

  extmodule data_ext_inTestHarness :
    input R0_addr : UInt<11>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<8>
    input W0_addr : UInt<11>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<8>
    input W0_mask : UInt<4>
  
    defname = data_ext
    

  extmodule meta_ext_inTestHarness :
    input R0_addr : UInt<5>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<240>
    input W0_addr : UInt<5>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<240>
  
    defname = meta_ext
    

  extmodule ghist_0_ext_inTestHarness :
    input R0_addr : UInt<5>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<72>
    input W0_addr : UInt<5>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<72>
  
    defname = ghist_0_ext
    

  extmodule rob_debug_inst_mem_ext_inTestHarness :
    input R0_addr : UInt<5>
    input R0_en : UInt<1>
    input R0_clk : Clock
    output R0_data : UInt<96>
    input W0_addr : UInt<5>
    input W0_en : UInt<1>
    input W0_clk : Clock
    input W0_data : UInt<96>
    input W0_mask : UInt<3>
  
    defname = rob_debug_inst_mem_ext
    

  extmodule l2_tlb_ram_ext_inTestHarness :
    input RW0_addr : UInt<10>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<44>
    output RW0_rdata : UInt<44>
  
    defname = l2_tlb_ram_ext
    

  extmodule data_arrays_0_ext_inTestHarness :
    input RW0_addr : UInt<8>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<256>
    output RW0_rdata : UInt<256>
    input RW0_wmask : UInt<32>
  
    defname = data_arrays_0_ext
    

  extmodule tag_array_1_ext_inTestHarness :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<88>
    output RW0_rdata : UInt<88>
    input RW0_wmask : UInt<4>
  
    defname = tag_array_1_ext
    

  extmodule tag_array_2_ext_inTestHarness :
    input RW0_addr : UInt<6>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<84>
    output RW0_rdata : UInt<84>
    input RW0_wmask : UInt<4>
  
    defname = tag_array_2_ext
    

  extmodule data_arrays_0_0_ext_inTestHarness :
    input RW0_addr : UInt<8>
    input RW0_en : UInt<1>
    input RW0_clk : Clock
    input RW0_wmode : UInt<1>
    input RW0_wdata : UInt<128>
    output RW0_rdata : UInt<128>
    input RW0_wmask : UInt<4>
  
    defname = data_arrays_0_0_ext
    
