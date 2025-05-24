// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VM1T_tb__Syms.h"


VL_ATTR_COLD void VM1T_tb___024root__trace_init_sub__TOP__0(VM1T_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("M1T_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"gpi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"gpo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+28,0,"rst_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Toplevel_m1t_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+391,0,"IS_TESTBENCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"async_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"gpi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"gpo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+374,0,"gen_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"irom_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+30,0,"rst_buffer0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"rst_buffer1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"sync_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"rom_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"inst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+35,0,"mem_address_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+36,0,"mem_mask_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"mem_read_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"mem_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"mem_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+40,0,"mem_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"mem_wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"mem_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"mem_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"mem_wb_dest_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+45,0,"mem_read_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"mem_available",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"mem_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"icache_miss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"instruction_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+33,0,"icache_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"inst_address_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+35,0,"mem_address_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+36,0,"mem_mask_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"mem_read_fnc_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"mem_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"mem_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+40,0,"mem_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"mem_wb_dest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"mem_input_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"mem_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"mem_wb_dest_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+45,0,"mem_read_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"mem_available",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"mem_idle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"fetch_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+48,0,"adjusted_instruction_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("decode_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+49,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("uop", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+50,0,"call_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"alu_type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"alu_force_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"alu_dsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+54,0,"call_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"call_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"call_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"fence_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"call_brh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"brh_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+60,0,"jmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"regfile_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"rs1_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"rs2_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+64,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+65,0,"jmp_tgt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+66,0,"inc_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+67,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,0,"rs1_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rs2_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("issue_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+71,0,"regfile_reserve",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"reserve_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"jmp_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"jmp_tgt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+75,0,"pipeline_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+76,0,"call",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+78,0,"data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+79,0,"data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"operation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+81,0,"type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+82,0,"call",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("div", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+87,0,"call",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+88,0,"call",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"func4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+92,0,"fence_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"fence_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("brh", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+94,0,"call",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+91,0,"func4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+64,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+96,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alu_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+378,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+98,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mul_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+99,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+100,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+101,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+102,0,"mul_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("div_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+103,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+104,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+105,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+106,0,"div_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lsu_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+43,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+45,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+107,0,"lsu_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"lsu_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"brh_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"brh_issue_inval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"brh_pc_tgt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+112,0,"wb_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"wb_conflict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"wb_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+115,0,"wb_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+116,0,"writeback_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"reset_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"call",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"dest_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+118,0,"operation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+119,0,"type_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"data_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+121,0,"data_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+378,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,0,"dest_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+98,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add_sub", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+379,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+380,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"lessthan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bitwise", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+122,0,"vand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+123,0,"vior",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+124,0,"vxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("shifter", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+6,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"part_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+8,0,"rev_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"rev_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+125,0,"rtr_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"rtl_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("bscan", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1,0,"res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"rev_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"ihb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"rev_ihb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+383,0,"selected_ihb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bitscan_vals", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bit_manip", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+384,0,"shifted_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+385,0,"__SYM__set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+386,0,"clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+387,0,"flp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+388,0,"int_selected_result0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+389,0,"int_selected_result1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("BranchUnit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"call",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"operation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+91,0,"func4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"data_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"data_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+64,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+96,0,"imm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+109,0,"full_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"issue_inval",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"pc_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->pushPrefix("DecodeStage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"hazard_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"instruction_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+49,0,"instruction_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("uop_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+130,0,"call_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"alu_type_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"alu_force_add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"alu_dsel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+134,0,"call_mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"call_div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"call_lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"fence_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"call_brh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"brh_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+140,0,"jmp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"regfile_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"rs1_dependency",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"rs2_dependency",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+64,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+65,0,"jmp_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+66,0,"inc_pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+67,0,"rs1_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"rs2_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,0,"rs1_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rs2_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"issue_reserve",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"reserve_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+116,0,"regfile_write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"writeback_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"regfile_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("uop_buffer", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+130,0,"call_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"alu_type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"alu_force_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"alu_dsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+134,0,"call_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"call_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"call_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"fence_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"call_brh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"brh_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+140,0,"jmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"regfile_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"rs1_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"rs2_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+49,0,"instruction_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+64,0,"pc_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+65,0,"jmp_tgt_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+66,0,"inc_pc_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+144,0,"selected_high_brh_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("decoded_uop", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+145,0,"call_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"alu_type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"alu_force_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"alu_dsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+149,0,"call_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"call_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"call_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"fence_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"call_brh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"brh_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+155,0,"jmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"regfile_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"rs1_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"rs2_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("InstructionDecoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+159,0,"opcode_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+160,0,"func4_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("uop_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+145,0,"call_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"alu_type_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"alu_force_add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"alu_dsel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+149,0,"call_mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"call_div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"call_lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"fence_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"call_brh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"brh_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+155,0,"jmp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"regfile_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"rs1_dependency",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"rs2_dependency",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+161,0,"compressed_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+162,0,"calu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"copsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+164,0,"calu1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"cmuldiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"clsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"cbrh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"cmisc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("RegisterFile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"reserve",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"reserve_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+168,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+159,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+160,0,"func4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+67,0,"rs1_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"rs2_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,0,"rs1_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rs2_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"writeback_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 15; ++i) {
        tracep->declBus(c+170+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("scoreboard", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 15; ++i) {
        tracep->declBit(c+185+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1));
    }
    tracep->popPrefix();
    tracep->declBus(c+200,0,"special_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("regfile_read", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+201+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+217,0,"scoreboard_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"rs1_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"rs2_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,0,"scoreboard_buffer1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"scoreboard_buffer2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Divider", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"call",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"operation_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+72,0,"dest_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"data_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"data_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+106,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+104,0,"dest_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+105,0,"data_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"data_in1_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+221,0,"data_in2_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+222,0,"operation_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"dest_addr_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+223,0,"preserved_data1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"preserved_data2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"cond_abs_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+226,0,"cond_abs_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+227,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+228,0,"q_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+229,0,"i_ctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+230,0,"temp_a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+231,0,"temp_q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"temp_a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+233,0,"temp_q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+234,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+105,0,"temp_valid_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"negate_results",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+237,0,"remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("iteration1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+227,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+228,0,"q_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+221,0,"m_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+230,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+231,0,"q_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+238,0,"stage1_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+239,0,"stage1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+240,0,"stage2_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+230,0,"stage3_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+231,0,"stage3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("iteration2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+230,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+231,0,"q_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+221,0,"m_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+233,0,"q_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+241,0,"stage1_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+242,0,"stage1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+243,0,"stage2_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+232,0,"stage3_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+233,0,"stage3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FetchStage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"icache_miss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+47,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+34,0,"address_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+47,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->pushPrefix("IssueStage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+245,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"wb_conflict_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"wb_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"wb_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("uop_in", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+130,0,"call_alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"alu_type_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"alu_force_add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"alu_dsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+134,0,"call_mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"call_div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"call_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"fence_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"call_brh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"brh_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+140,0,"jmp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"regfile_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"rs1_dependency",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"rs2_dependency",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+49,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+64,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+65,0,"jmp_target_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+66,0,"inc_pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+67,0,"rs1_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"rs2_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,0,"rs1_busy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rs2_busy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"regfile_reserve",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"reserve_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"jmp_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"jmp_target_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+75,0,"pipeline_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+98,0,"call",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"dest_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+120,0,"data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+121,0,"data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+118,0,"operation",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+119,0,"type_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mul_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+82,0,"call",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"dest_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("div_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+87,0,"call",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"dest_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("brh_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+94,0,"call",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+91,0,"func4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+64,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+96,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+88,0,"call",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"dest_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"store_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"func4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+92,0,"fence_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"fence_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBit(c+102,0,"mul_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"div_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"lsu_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"lsu_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"wb_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("inst", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+246,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+247,0,"func4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+248,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+249,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+250,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+251,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+252,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("j", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+253,0,"imm_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+254,0,"imm_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("b", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+255,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+256,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+257,0,"rs1_forward_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"rs2_forward_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"rs1_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"rs2_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("uop", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+261,0,"call_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"alu_type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"alu_force_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"alu_dsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+265,0,"call_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"call_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"call_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"fence_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"call_brh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"brh_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+271,0,"jmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"regfile_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"rs1_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"rs2_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+275,0,"inst_fence",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"exe_free",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"data_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"ifence_inval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"wb_conflict_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"call",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"dest_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"store_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"address_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"func4_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+92,0,"fence_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"fence_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+108,0,"lsq_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"lsu_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"wb_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"wb_dest_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+45,0,"wb_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"mem_address_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+36,0,"mem_mask_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"mem_read_fnc_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"mem_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"mem_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+40,0,"mem_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"mem_wb_dest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"mem_input_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"mem_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"mem_wb_dest_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+45,0,"mem_read_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"mem_available",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"mem_idle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+279,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+280,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+281,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+282,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+283,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+284,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+285,0,"stage1_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+286,0,"generated_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("lsq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+287,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+288,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+289,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+290,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+291,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+292,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+293,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+294,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+295,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+296,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+297,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+298,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+299,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+300,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+301,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+302,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+305,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+306,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+307,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+308,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+309,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+310,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+311,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+312,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+313,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+314,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+315,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+316,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+317,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+318,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+319,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+320,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+321,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+322,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+323,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+324,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+325,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+326,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+327,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+328,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+329,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+330,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+331,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+332,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+333,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+334,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+335,0,"lsq_head_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+336,0,"lsq_tail_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+337,0,"lsq_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lsq_head_buffer", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+38,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+35,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+36,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+40,0,"lsq_head_buffer_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"call",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"operation_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+72,0,"dest_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"data_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"data_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+102,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+100,0,"dest_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+101,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+339,0,"adj_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+340,0,"adj_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+341,0,"data1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"data2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"operation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+344,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+345,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("stage2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+346,0,"partial_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+347,0,"data1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"data2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+349,0,"operation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+101,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+350,0,"neg_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+351,0,"adjusted_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WritebackStage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"alu_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,0,"alu_dest_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+98,0,"alu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"mul_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+100,0,"mul_dest_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+101,0,"mul_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"div_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+104,0,"div_dest_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+105,0,"div_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"lsu_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"lsu_dest_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+45,0,"lsu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"conflict_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+115,0,"dest_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+116,0,"writeback_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+352,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+353,0,"dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+354,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+355,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+356,0,"dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+357,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("div", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+358,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+359,0,"dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+360,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("lsu", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+361,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+362,0,"dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+363,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+113,0,"wb_conflict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+364,0,"selector",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"selected_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+115,0,"selected_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("DetectConflict", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+394,0,"truth_table",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+395,0,"truth_table0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+396,0,"truth_table1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MemoryController", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"core_mem_address_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+36,0,"core_mem_mask_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"core_mem_read_fnc_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"core_mem_data_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"core_mem_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+365,0,"core_mem_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"core_mem_wb_dest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"core_mem_input_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"core_mem_data_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"core_mem_wb_dest_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+45,0,"core_mem_read_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"core_mem_available",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"core_mem_idle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"gpo_bank",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+390,0,"gpi_bank",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+366,0,"ram_buffer0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+367,0,"ram_buffer1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"gpo_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+368,0,"gpi_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+369,0,"dtype_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+44,0,"wb_dest_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+370,0,"en_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"mode_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"sel_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"selected_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"adjusted_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VM1T_tb___024root__trace_init_top(VM1T_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VM1T_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VM1T_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VM1T_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VM1T_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VM1T_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VM1T_tb___024root__trace_register(VM1T_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VM1T_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VM1T_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VM1T_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VM1T_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VM1T_tb___024root__trace_const_0_sub_0(VM1T_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VM1T_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root__trace_const_0\n"); );
    // Init
    VM1T_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VM1T_tb___024root*>(voidSelf);
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VM1T_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VM1T_tb___024root__trace_const_0_sub_0(VM1T_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+390,(0U),16);
    bufp->fullIData(oldp+391,(1U),32);
    bufp->fullBit(oldp+392,(1U));
    bufp->fullBit(oldp+393,(0U));
    bufp->fullSData(oldp+394,(0xfee8U),16);
    bufp->fullSData(oldp+395,(0xf3U),16);
    bufp->fullSData(oldp+396,(0xfU),16);
}

VL_ATTR_COLD void VM1T_tb___024root__trace_full_0_sub_0(VM1T_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VM1T_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root__trace_full_0\n"); );
    // Init
    VM1T_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VM1T_tb___024root*>(voidSelf);
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VM1T_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VM1T_tb___024root__trace_full_0_sub_0(VM1T_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,((0xffffU & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[2U])),16);
    bufp->fullSData(oldp+2,((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U] 
                             >> 0x10U)),16);
    bufp->fullSData(oldp+3,((0xffffU & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U])),16);
    bufp->fullSData(oldp+4,((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                             >> 0x10U)),16);
    bufp->fullSData(oldp+5,((0xffffU & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U])),16);
    bufp->fullSData(oldp+6,((0xffffU & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
                                        >> 1U))),16);
    bufp->fullIData(oldp+7,((0x1ffffU & ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
                                          << 0x10U) 
                                         | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                            >> 0x10U)))),17);
    bufp->fullSData(oldp+8,((0xffffU & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U])),16);
    bufp->fullSData(oldp+9,((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U] 
                             >> 0x10U)),16);
    bufp->fullSData(oldp+10,((0xffffU & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U])),16);
    bufp->fullCData(oldp+11,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[0]),5);
    bufp->fullCData(oldp+12,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[1]),5);
    bufp->fullCData(oldp+13,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[2]),5);
    bufp->fullCData(oldp+14,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[3]),5);
    bufp->fullCData(oldp+15,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[4]),5);
    bufp->fullCData(oldp+16,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[5]),5);
    bufp->fullCData(oldp+17,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[6]),5);
    bufp->fullCData(oldp+18,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[7]),5);
    bufp->fullCData(oldp+19,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[8]),5);
    bufp->fullCData(oldp+20,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[9]),5);
    bufp->fullCData(oldp+21,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[10]),5);
    bufp->fullCData(oldp+22,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[11]),5);
    bufp->fullCData(oldp+23,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[12]),5);
    bufp->fullCData(oldp+24,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[13]),5);
    bufp->fullCData(oldp+25,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[14]),5);
    bufp->fullCData(oldp+26,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[15]),5);
    bufp->fullSData(oldp+27,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg),16);
    bufp->fullBit(oldp+28,(vlSelfRef.M1T_tb__DOT__rst_buffer));
    bufp->fullSData(oldp+29,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer),16);
    bufp->fullBit(oldp+30,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer0));
    bufp->fullBit(oldp+31,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer1));
    bufp->fullBit(oldp+32,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst));
    bufp->fullBit(oldp+33,((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__DecodeStage__hazard_stall)))));
    bufp->fullSData(oldp+34,(((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst)
                               ? 0U : (0x7fffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en)
                                                   ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__data_in)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc)))))),15);
    bufp->fullSData(oldp+35,((0x7fffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                                 >> 0xaU)))),15);
    bufp->fullCData(oldp+36,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                            >> 8U)))),2);
    bufp->fullCData(oldp+37,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                            >> 6U)))),2);
    bufp->fullSData(oldp+38,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                                 >> 0x19U)))),16);
    bufp->fullCData(oldp+39,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                            >> 4U)))),2);
    bufp->fullBit(oldp+40,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer_valid));
    bufp->fullCData(oldp+41,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer))),4);
    bufp->fullBit(oldp+42,((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict)))));
    bufp->fullSData(oldp+43,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__adjusted_data),16);
    bufp->fullCData(oldp+44,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__wb_dest_buffer),4);
    bufp->fullBit(oldp+45,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__mem_read_ack));
    bufp->fullBit(oldp+46,((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer)))));
    bufp->fullSData(oldp+47,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc),15);
    bufp->fullSData(oldp+48,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__adjusted_instruction_in),16);
    bufp->fullSData(oldp+49,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer),12);
    bufp->fullBit(oldp+50,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 0x10U))));
    bufp->fullBit(oldp+51,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 0xfU))));
    bufp->fullBit(oldp+52,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 0xeU))));
    bufp->fullCData(oldp+53,((7U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                    >> 0xbU))),3);
    bufp->fullBit(oldp+54,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 0xaU))));
    bufp->fullBit(oldp+55,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 9U))));
    bufp->fullBit(oldp+56,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 8U))));
    bufp->fullBit(oldp+57,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 7U))));
    bufp->fullBit(oldp+58,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 6U))));
    bufp->fullCData(oldp+59,((3U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                    >> 4U))),2);
    bufp->fullBit(oldp+60,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 3U))));
    bufp->fullBit(oldp+61,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 2U))));
    bufp->fullBit(oldp+62,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 1U))));
    bufp->fullBit(oldp+63,((1U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer)));
    bufp->fullSData(oldp+64,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__pc_buffer),15);
    bufp->fullSData(oldp+65,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__jmp_tgt_buffer),15);
    bufp->fullSData(oldp+66,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__inc_pc_buffer),15);
    bufp->fullSData(oldp+67,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__rs1_buffer),16);
    bufp->fullSData(oldp+68,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__rs2_buffer),16);
    bufp->fullBit(oldp+69,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer1));
    bufp->fullBit(oldp+70,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2));
    bufp->fullBit(oldp+71,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve));
    bufp->fullCData(oldp+72,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),4);
    bufp->fullBit(oldp+73,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_en));
    bufp->fullSData(oldp+74,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_target_out),15);
    bufp->fullBit(oldp+75,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__pipeline_stall));
    bufp->fullBit(oldp+76,((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                          >> 0x29U)))));
    bufp->fullCData(oldp+77,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                              >> 0x25U)))),4);
    bufp->fullSData(oldp+78,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 0x15U)))),16);
    bufp->fullSData(oldp+79,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 5U)))),16);
    bufp->fullCData(oldp+80,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                              >> 1U)))),4);
    bufp->fullBit(oldp+81,((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out))));
    bufp->fullBit(oldp+82,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Multiplier__call));
    bufp->fullCData(oldp+83,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_5 
                                            >> 0x24U)))),2);
    bufp->fullCData(oldp+84,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_5 
                                              >> 0x20U)))),4);
    bufp->fullSData(oldp+85,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_5 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+86,((0xffffU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_5))),16);
    bufp->fullBit(oldp+87,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Divider__call));
    bufp->fullBit(oldp+88,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__call));
    bufp->fullSData(oldp+89,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data),16);
    bufp->fullSData(oldp+90,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data),16);
    bufp->fullCData(oldp+91,((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                      >> 4U))),4);
    bufp->fullBit(oldp+92,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__fence_mode));
    bufp->fullCData(oldp+93,((3U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),2);
    bufp->fullBit(oldp+94,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__call));
    bufp->fullCData(oldp+95,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__operation),2);
    bufp->fullCData(oldp+96,((0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                       >> 4U))),8);
    bufp->fullCData(oldp+97,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                              >> 0x25U)))),4);
    bufp->fullBit(oldp+98,((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                          >> 0x29U)))));
    bufp->fullSData(oldp+99,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Multiplier__data_out),16);
    bufp->fullCData(oldp+100,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                               >> 1U)))),4);
    bufp->fullBit(oldp+101,((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2))));
    bufp->fullBit(oldp+102,((1U & (~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1) 
                                      | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2))))));
    bufp->fullSData(oldp+103,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Divider__data_out),16);
    bufp->fullCData(oldp+104,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__dest_addr_buffer),4);
    bufp->fullBit(oldp+105,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_valid_flag));
    bufp->fullBit(oldp+106,((0U != (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state))));
    bufp->fullBit(oldp+107,(((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1_valid)) 
                             & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty) 
                                & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__mem_read_ack)) 
                                   & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer)))))));
    bufp->fullBit(oldp+108,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__lsu_full));
    bufp->fullBit(oldp+109,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_flush));
    bufp->fullBit(oldp+110,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_issue_inval));
    bufp->fullSData(oldp+111,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_pc_tgt),15);
    bufp->fullBit(oldp+112,((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en)))));
    bufp->fullBit(oldp+113,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict));
    bufp->fullSData(oldp+114,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data),16);
    bufp->fullCData(oldp+115,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest),4);
    bufp->fullBit(oldp+116,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en));
    bufp->fullBit(oldp+117,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__reset_buffer));
    bufp->fullCData(oldp+118,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                               >> 1U)))),4);
    bufp->fullBit(oldp+119,((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out))));
    bufp->fullSData(oldp+120,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                  >> 0x15U)))),16);
    bufp->fullSData(oldp+121,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                  >> 5U)))),16);
    bufp->fullSData(oldp+122,((0xffffU & ((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                     >> 5U))))),16);
    bufp->fullSData(oldp+123,((0xffffU & ((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                   >> 0x15U)) 
                                          | (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                     >> 5U))))),16);
    bufp->fullSData(oldp+124,((0xffffU & ((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                     >> 5U))))),16);
    bufp->fullIData(oldp+125,(((((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                          >> 0x15U)) 
                                 << 0x10U) | (0xffffU 
                                              & (IData)(
                                                        (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                         >> 0x15U)))) 
                               >> (0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                   >> 5U))))),32);
    bufp->fullIData(oldp+126,(((((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                          >> 0x15U)) 
                                 << 0x10U) | (0xffffU 
                                              & (IData)(
                                                        (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                         >> 0x15U)))) 
                               << (0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                   >> 5U))))),32);
    bufp->fullBit(oldp+127,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst));
    bufp->fullBit(oldp+128,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__DecodeStage__hazard_stall));
    bufp->fullBit(oldp+129,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en));
    bufp->fullBit(oldp+130,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 0x10U))));
    bufp->fullBit(oldp+131,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 0xfU))));
    bufp->fullBit(oldp+132,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 0xeU))));
    bufp->fullCData(oldp+133,((7U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+134,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 0xaU))));
    bufp->fullBit(oldp+135,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 9U))));
    bufp->fullBit(oldp+136,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 8U))));
    bufp->fullBit(oldp+137,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 7U))));
    bufp->fullBit(oldp+138,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 6U))));
    bufp->fullCData(oldp+139,((3U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 4U))),2);
    bufp->fullBit(oldp+140,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 3U))));
    bufp->fullBit(oldp+141,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 2U))));
    bufp->fullBit(oldp+142,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 1U))));
    bufp->fullBit(oldp+143,((1U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer)));
    bufp->fullCData(oldp+144,((0x7fU & ((0x800U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer))
                                         ? ((0x70U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                                               >> 0xfU)))) 
                                                << 4U)) 
                                            | (0xfU 
                                               & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                                  >> 0xcU)))
                                         : (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                                          >> 7U))))))),7);
    bufp->fullBit(oldp+145,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 0x10U))));
    bufp->fullBit(oldp+146,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 0xfU))));
    bufp->fullBit(oldp+147,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 0xeU))));
    bufp->fullCData(oldp+148,((7U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+149,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 0xaU))));
    bufp->fullBit(oldp+150,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 9U))));
    bufp->fullBit(oldp+151,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 8U))));
    bufp->fullBit(oldp+152,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 7U))));
    bufp->fullBit(oldp+153,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 6U))));
    bufp->fullCData(oldp+154,((3U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                     >> 4U))),2);
    bufp->fullBit(oldp+155,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 3U))));
    bufp->fullBit(oldp+156,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 2U))));
    bufp->fullBit(oldp+157,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 1U))));
    bufp->fullBit(oldp+158,((1U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop)));
    bufp->fullCData(oldp+159,((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+160,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer))),4);
    bufp->fullCData(oldp+161,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop),8);
    bufp->fullBit(oldp+162,((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop))));
    bufp->fullCData(oldp+163,((7U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                     >> 1U))),3);
    bufp->fullBit(oldp+164,((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                   >> 4U))));
    bufp->fullBit(oldp+165,((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                   >> 5U))));
    bufp->fullBit(oldp+166,((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                   >> 6U))));
    bufp->fullBit(oldp+167,((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                   >> 7U))));
    bufp->fullCData(oldp+168,((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+169,((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                       >> 4U))),4);
    bufp->fullSData(oldp+170,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[0]),16);
    bufp->fullSData(oldp+171,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[1]),16);
    bufp->fullSData(oldp+172,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[2]),16);
    bufp->fullSData(oldp+173,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[3]),16);
    bufp->fullSData(oldp+174,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[4]),16);
    bufp->fullSData(oldp+175,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[5]),16);
    bufp->fullSData(oldp+176,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[6]),16);
    bufp->fullSData(oldp+177,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[7]),16);
    bufp->fullSData(oldp+178,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[8]),16);
    bufp->fullSData(oldp+179,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[9]),16);
    bufp->fullSData(oldp+180,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[10]),16);
    bufp->fullSData(oldp+181,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[11]),16);
    bufp->fullSData(oldp+182,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[12]),16);
    bufp->fullSData(oldp+183,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[13]),16);
    bufp->fullSData(oldp+184,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[14]),16);
    bufp->fullBit(oldp+185,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0]));
    bufp->fullBit(oldp+186,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[1]));
    bufp->fullBit(oldp+187,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[2]));
    bufp->fullBit(oldp+188,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[3]));
    bufp->fullBit(oldp+189,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[4]));
    bufp->fullBit(oldp+190,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[5]));
    bufp->fullBit(oldp+191,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[6]));
    bufp->fullBit(oldp+192,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[7]));
    bufp->fullBit(oldp+193,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[8]));
    bufp->fullBit(oldp+194,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[9]));
    bufp->fullBit(oldp+195,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[10]));
    bufp->fullBit(oldp+196,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[11]));
    bufp->fullBit(oldp+197,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[12]));
    bufp->fullBit(oldp+198,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[13]));
    bufp->fullBit(oldp+199,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[14]));
    bufp->fullSData(oldp+200,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant),16);
    bufp->fullSData(oldp+201,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0]),16);
    bufp->fullSData(oldp+202,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[1]),16);
    bufp->fullSData(oldp+203,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[2]),16);
    bufp->fullSData(oldp+204,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[3]),16);
    bufp->fullSData(oldp+205,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[4]),16);
    bufp->fullSData(oldp+206,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[5]),16);
    bufp->fullSData(oldp+207,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[6]),16);
    bufp->fullSData(oldp+208,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[7]),16);
    bufp->fullSData(oldp+209,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[8]),16);
    bufp->fullSData(oldp+210,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[9]),16);
    bufp->fullSData(oldp+211,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[10]),16);
    bufp->fullSData(oldp+212,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[11]),16);
    bufp->fullSData(oldp+213,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[12]),16);
    bufp->fullSData(oldp+214,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[13]),16);
    bufp->fullSData(oldp+215,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[14]),16);
    bufp->fullSData(oldp+216,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[15]),16);
    bufp->fullSData(oldp+217,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_read),16);
    bufp->fullBit(oldp+218,((1U & (~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_valid_flag) 
                                      & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict))))));
    bufp->fullCData(oldp+219,((3U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                     >> 4U))),2);
    bufp->fullSData(oldp+220,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in1_buffer),16);
    bufp->fullSData(oldp+221,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer),16);
    bufp->fullCData(oldp+222,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer),2);
    bufp->fullBit(oldp+223,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data1_sign));
    bufp->fullBit(oldp+224,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data2_sign));
    bufp->fullSData(oldp+225,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data1),16);
    bufp->fullSData(oldp+226,((0xffffU & (((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer)) 
                                           & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer) 
                                              >> 0xfU))
                                           ? (- (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer))
                                           : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer)))),16);
    bufp->fullIData(oldp+227,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg),17);
    bufp->fullSData(oldp+228,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg),16);
    bufp->fullCData(oldp+229,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr),3);
    bufp->fullIData(oldp+230,(((0x8000U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a)
                                ? vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage1_a
                                : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a)),17);
    bufp->fullSData(oldp+231,(((0xfffeU & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg), 1U)) 
                               | (1U & (~ (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                           >> 0x10U))))),16);
    bufp->fullIData(oldp+232,(((0x8000U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a)
                                ? vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage1_a
                                : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a)),17);
    bufp->fullSData(oldp+233,(((0xfffeU & VL_SHIFTL_III(32,16,32, 
                                                        ((0xfffeU 
                                                          & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg), 1U)) 
                                                         | (1U 
                                                            & (~ 
                                                               (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                                                >> 0x10U)))), 1U)) 
                               | (1U & (~ (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a 
                                           >> 0x10U))))),16);
    bufp->fullCData(oldp+234,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state),2);
    bufp->fullBit(oldp+235,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results));
    bufp->fullSData(oldp+236,((0xffffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results)
                                           ? (- (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg))
                                           : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg)))),16);
    bufp->fullSData(oldp+237,((0xffffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results)
                                           ? (- vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg)
                                           : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg))),16);
    bufp->fullIData(oldp+238,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage1_a),17);
    bufp->fullSData(oldp+239,((0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg), 1U))),16);
    bufp->fullIData(oldp+240,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a),17);
    bufp->fullIData(oldp+241,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage1_a),17);
    bufp->fullSData(oldp+242,((0xffffU & VL_SHIFTL_III(16,16,32, 
                                                       ((0xfffeU 
                                                         & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg), 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                                               >> 0x10U)))), 1U))),16);
    bufp->fullIData(oldp+243,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a),17);
    bufp->fullSData(oldp+244,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__data_in),15);
    bufp->fullBit(oldp+245,(((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_flush) 
                             | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_issue_inval))));
    bufp->fullCData(oldp+246,((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+247,((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+248,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),4);
    bufp->fullCData(oldp+249,((0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                        >> 4U))),8);
    bufp->fullCData(oldp+250,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),4);
    bufp->fullCData(oldp+251,((0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                        >> 4U))),8);
    bufp->fullCData(oldp+252,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),4);
    bufp->fullCData(oldp+253,((0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                        >> 4U))),8);
    bufp->fullCData(oldp+254,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),4);
    bufp->fullCData(oldp+255,((0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                        >> 4U))),8);
    bufp->fullCData(oldp+256,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),4);
    bufp->fullBit(oldp+257,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_forward_en));
    bufp->fullBit(oldp+258,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_forward_en));
    bufp->fullBit(oldp+259,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_busy));
    bufp->fullBit(oldp+260,(((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_forward_en)) 
                             & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2) 
                                & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer))));
    bufp->fullBit(oldp+261,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                   >> 0x10U))));
    bufp->fullBit(oldp+262,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                   >> 0xfU))));
    bufp->fullBit(oldp+263,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                   >> 0xeU))));
    bufp->fullCData(oldp+264,((7U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+265,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                   >> 0xaU))));
    bufp->fullBit(oldp+266,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                   >> 9U))));
    bufp->fullBit(oldp+267,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                   >> 8U))));
    bufp->fullBit(oldp+268,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                   >> 7U))));
    bufp->fullBit(oldp+269,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                   >> 6U))));
    bufp->fullCData(oldp+270,((3U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                     >> 4U))),2);
    bufp->fullBit(oldp+271,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                   >> 3U))));
    bufp->fullBit(oldp+272,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                   >> 2U))));
    bufp->fullBit(oldp+273,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                   >> 1U))));
    bufp->fullBit(oldp+274,((1U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop)));
    bufp->fullBit(oldp+275,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__inst_fence));
    bufp->fullBit(oldp+276,(((0U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state)) 
                             & ((~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1) 
                                    | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2))) 
                                & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en)) 
                                   & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1_valid)) 
                                      & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty) 
                                         & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__mem_read_ack)) 
                                            & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer))))))))));
    bufp->fullBit(oldp+277,(((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_busy) 
                             | (((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_forward_en)) 
                                 & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2) 
                                    & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer)) 
                                | ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_busy) 
                                   & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve))))));
    bufp->fullBit(oldp+278,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__ifence_inval));
    bufp->fullSData(oldp+279,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+280,((0x7fffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+281,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                                             >> 8U)))),2);
    bufp->fullCData(oldp+282,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                                             >> 6U)))),2);
    bufp->fullCData(oldp+283,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                                             >> 4U)))),2);
    bufp->fullCData(oldp+284,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1))),4);
    bufp->fullBit(oldp+285,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1_valid));
    bufp->fullCData(oldp+286,(((0U == ((2U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                              >> 3U)) 
                                       | (1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data))))
                                ? 2U : ((1U == ((2U 
                                                 & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data))))
                                         ? 1U : 3U))),2);
    bufp->fullSData(oldp+287,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [0U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+288,((0x7fffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [0U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+289,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [0U] >> 8U)))),2);
    bufp->fullCData(oldp+290,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [0U] >> 6U)))),2);
    bufp->fullCData(oldp+291,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [0U] >> 4U)))),2);
    bufp->fullCData(oldp+292,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                              [0U]))),4);
    bufp->fullSData(oldp+293,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [1U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+294,((0x7fffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [1U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+295,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [1U] >> 8U)))),2);
    bufp->fullCData(oldp+296,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [1U] >> 6U)))),2);
    bufp->fullCData(oldp+297,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [1U] >> 4U)))),2);
    bufp->fullCData(oldp+298,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                              [1U]))),4);
    bufp->fullSData(oldp+299,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [2U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+300,((0x7fffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [2U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+301,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [2U] >> 8U)))),2);
    bufp->fullCData(oldp+302,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [2U] >> 6U)))),2);
    bufp->fullCData(oldp+303,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [2U] >> 4U)))),2);
    bufp->fullCData(oldp+304,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                              [2U]))),4);
    bufp->fullSData(oldp+305,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [3U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+306,((0x7fffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [3U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+307,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [3U] >> 8U)))),2);
    bufp->fullCData(oldp+308,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [3U] >> 6U)))),2);
    bufp->fullCData(oldp+309,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [3U] >> 4U)))),2);
    bufp->fullCData(oldp+310,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                              [3U]))),4);
    bufp->fullSData(oldp+311,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [4U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+312,((0x7fffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [4U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+313,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [4U] >> 8U)))),2);
    bufp->fullCData(oldp+314,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [4U] >> 6U)))),2);
    bufp->fullCData(oldp+315,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [4U] >> 4U)))),2);
    bufp->fullCData(oldp+316,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                              [4U]))),4);
    bufp->fullSData(oldp+317,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [5U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+318,((0x7fffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [5U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+319,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [5U] >> 8U)))),2);
    bufp->fullCData(oldp+320,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [5U] >> 6U)))),2);
    bufp->fullCData(oldp+321,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [5U] >> 4U)))),2);
    bufp->fullCData(oldp+322,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                              [5U]))),4);
    bufp->fullSData(oldp+323,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [6U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+324,((0x7fffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [6U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+325,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [6U] >> 8U)))),2);
    bufp->fullCData(oldp+326,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [6U] >> 6U)))),2);
    bufp->fullCData(oldp+327,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [6U] >> 4U)))),2);
    bufp->fullCData(oldp+328,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                              [6U]))),4);
    bufp->fullSData(oldp+329,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [7U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+330,((0x7fffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                  [7U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+331,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [7U] >> 8U)))),2);
    bufp->fullCData(oldp+332,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [7U] >> 6U)))),2);
    bufp->fullCData(oldp+333,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                             [7U] >> 4U)))),2);
    bufp->fullCData(oldp+334,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                              [7U]))),4);
    bufp->fullCData(oldp+335,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr),4);
    bufp->fullCData(oldp+336,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr),4);
    bufp->fullBit(oldp+337,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty));
    bufp->fullBit(oldp+338,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Multiplier__clk_en));
    bufp->fullSData(oldp+339,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+340,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                                  >> 9U)))),16);
    bufp->fullBit(oldp+341,((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                           >> 8U)))));
    bufp->fullBit(oldp+342,((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                           >> 7U)))));
    bufp->fullCData(oldp+343,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                             >> 5U)))),2);
    bufp->fullCData(oldp+344,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                               >> 1U)))),4);
    bufp->fullBit(oldp+345,((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1))));
    bufp->fullIData(oldp+346,((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                       >> 9U))),32);
    bufp->fullBit(oldp+347,((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                           >> 8U)))));
    bufp->fullBit(oldp+348,((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                           >> 7U)))));
    bufp->fullCData(oldp+349,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                             >> 5U)))),2);
    bufp->fullBit(oldp+350,((1U & (((0U != (3U & (IData)(
                                                         (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                                          >> 5U)))) 
                                    & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                               >> 7U))) 
                                   ^ (IData)((0xc0ULL 
                                              == (0xc0ULL 
                                                  & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2)))))));
    bufp->fullIData(oldp+351,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__adjusted_result),32);
    bufp->fullSData(oldp+352,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
                              .__PVT__data),16);
    bufp->fullCData(oldp+353,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
                              .__PVT__dest),4);
    bufp->fullBit(oldp+354,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
                            .__PVT__valid));
    bufp->fullSData(oldp+355,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
                              .__PVT__data),16);
    bufp->fullCData(oldp+356,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
                              .__PVT__dest),4);
    bufp->fullBit(oldp+357,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
                            .__PVT__valid));
    bufp->fullSData(oldp+358,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                              .__PVT__data),16);
    bufp->fullCData(oldp+359,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                              .__PVT__dest),4);
    bufp->fullBit(oldp+360,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                            .__PVT__valid));
    bufp->fullSData(oldp+361,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                              .__PVT__data),16);
    bufp->fullCData(oldp+362,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                              .__PVT__dest),4);
    bufp->fullBit(oldp+363,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                            .__PVT__valid));
    bufp->fullCData(oldp+364,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector),2);
    bufp->fullBit(oldp+365,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT____Vcellinp__MemoryController__core_mem_enable));
    bufp->fullCData(oldp+366,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer0),8);
    bufp->fullCData(oldp+367,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer1),8);
    bufp->fullSData(oldp+368,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpi_buffer),16);
    bufp->fullCData(oldp+369,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__dtype_buffer),2);
    bufp->fullBit(oldp+370,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer));
    bufp->fullBit(oldp+371,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__mode_buffer));
    bufp->fullBit(oldp+372,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__sel_buffer));
    bufp->fullSData(oldp+373,(((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__sel_buffer)
                                ? 0U : (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer0) 
                                         << 8U) | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer1)))),16);
    bufp->fullBit(oldp+374,(vlSelfRef.clk));
    bufp->fullBit(oldp+375,(vlSelfRef.clk_en));
    bufp->fullBit(oldp+376,(vlSelfRef.sync_rst));
    bufp->fullBit(oldp+377,(((IData)(vlSelfRef.M1T_tb__DOT__rst_buffer) 
                             | (IData)(vlSelfRef.sync_rst))));
    bufp->fullSData(oldp+378,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__ALU__data_out),16);
    bufp->fullSData(oldp+379,((0xffffU & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                          >> 3U))),16);
    bufp->fullBit(oldp+380,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                   >> 2U))));
    bufp->fullBit(oldp+381,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                   >> 1U))));
    bufp->fullBit(oldp+382,((1U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub)));
    bufp->fullSData(oldp+383,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb),16);
    bufp->fullSData(oldp+384,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                                  >> 0x30U)))),16);
    bufp->fullSData(oldp+385,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+386,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+387,((0xffffU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip))),16);
    bufp->fullSData(oldp+388,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__int_selected_result0),16);
    bufp->fullBit(oldp+389,((1U & ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                  >> 3U)))
                                    ? ((1U & (IData)(
                                                     (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                      >> 2U)))
                                        ? ((1U & (IData)(
                                                         (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 1U)))
                                            ? (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0xffffU 
                                                           & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                                              >> 3U)))))
                                            : (IData)(
                                                      (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                       >> 
                                                       ((IData)(0x15U) 
                                                        + 
                                                        (0xfU 
                                                         & (IData)(
                                                                   (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                    >> 5U)))))))
                                        : ((1U & (IData)(
                                                         (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 1U)))
                                            ? vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub
                                            : (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                               >> 1U)))
                                    : ((1U & (IData)(
                                                     (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                      >> 2U)))
                                        ? ((1U & (IData)(
                                                         (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 1U)))
                                            ? (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                               >> 1U)
                                            : (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                               >> 2U))
                                        : ((1U & (IData)(
                                                         (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 1U)))
                                            ? (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                               >> 2U)
                                            : (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                                      >> 5U))))))))))));
}
