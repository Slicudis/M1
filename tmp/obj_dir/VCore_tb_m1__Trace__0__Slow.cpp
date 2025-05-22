// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore_tb_m1__Syms.h"


VL_ATTR_COLD void VCore_tb_m1___024root__trace_init_sub__TOP__0(VCore_tb_m1___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+352,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Core_tb_m1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+352,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"icache_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"inst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+28,0,"rom_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("Core_m1_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+352,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"icache_miss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"instruction_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+27,0,"icache_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"inst_address_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+30,0,"mem_address_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+31,0,"mem_mask_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,0,"mem_read_fnc_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,0,"mem_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"mem_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+35,0,"mem_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"mem_wb_dest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"mem_input_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"mem_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+374,0,"mem_wb_dest_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+375,0,"mem_read_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"mem_available",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"mem_idle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"fetch_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+29,0,"adjusted_instruction_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("decode_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+39,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("uop", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+40,0,"call_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"alu_type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"alu_force_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"alu_dsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+44,0,"call_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"call_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"call_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"fence_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"call_brh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"brh_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+50,0,"jmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"regfile_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"rs1_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"rs2_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+54,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+55,0,"jmp_tgt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+56,0,"inc_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+57,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+58,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+59,0,"rs1_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"rs2_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("issue_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+61,0,"regfile_reserve",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"reserve_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+63,0,"jmp_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"jmp_tgt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+65,0,"pipeline_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+66,0,"call",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,0,"data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+70,0,"operation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+71,0,"type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+72,0,"call",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("div", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+77,0,"call",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+78,0,"call",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"func4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+82,0,"fence_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"fence_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("brh", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+84,0,"call",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"func4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+86,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alu_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+356,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+88,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mul_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+89,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+91,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+92,0,"mul_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("div_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+93,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+95,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+96,0,"div_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lsu_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+373,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+374,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+375,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+97,0,"lsu_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"lsu_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"brh_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"brh_issue_inval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"brh_pc_tgt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+102,0,"wb_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"wb_conflict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"wb_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+105,0,"wb_dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+106,0,"writeback_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"reset_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+88,0,"call",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"dest_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+108,0,"operation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+109,0,"type_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"data_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+111,0,"data_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+356,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"dest_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+88,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add_sub", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+357,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+358,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"lessthan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bitwise", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+112,0,"vand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+113,0,"vior",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+114,0,"vxor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("shifter", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+6,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"part_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+8,0,"rev_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"rev_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declQuad(c+115,0,"int_rotation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+117,0,"rotation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bscan", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1,0,"res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"rev_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"ihb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"rev_ihb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+361,0,"selected_ihb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bitscan_vals", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bit_manip", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+362,0,"shifted_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+363,0,"__SYM__set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+364,0,"clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+365,0,"flp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+366,0,"int_selected_result0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+367,0,"int_selected_result1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("BranchUnit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+352,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"call",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"operation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"func4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"data_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"data_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+86,0,"imm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+99,0,"full_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"issue_inval",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"pc_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->pushPrefix("DecodeStage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+352,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"hazard_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"instruction_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+38,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+39,0,"instruction_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("uop_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+120,0,"call_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"alu_type_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"alu_force_add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"alu_dsel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+124,0,"call_mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"call_div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"call_lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"fence_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"call_brh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"brh_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+130,0,"jmp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"regfile_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"rs1_dependency",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"rs2_dependency",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+54,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+55,0,"jmp_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+56,0,"inc_pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+57,0,"rs1_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+58,0,"rs2_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+59,0,"rs1_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"rs2_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"issue_reserve",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"reserve_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+106,0,"regfile_write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"writeback_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+104,0,"regfile_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("uop_buffer", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+120,0,"call_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"alu_type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"alu_force_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"alu_dsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+124,0,"call_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"call_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"call_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"fence_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"call_brh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"brh_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+130,0,"jmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"regfile_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"rs1_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"rs2_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+39,0,"instruction_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+54,0,"pc_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+55,0,"jmp_tgt_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+56,0,"inc_pc_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+134,0,"selected_high_brh_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("decoded_uop", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+135,0,"call_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"alu_type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"alu_force_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"alu_dsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+139,0,"call_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"call_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"call_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"fence_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"call_brh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"brh_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+145,0,"jmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"regfile_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"rs1_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"rs2_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("InstructionDecoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+149,0,"opcode_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"func4_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("uop_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+135,0,"call_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"alu_type_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"alu_force_add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"alu_dsel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+139,0,"call_mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"call_div",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"call_lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"fence_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"call_brh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"brh_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+145,0,"jmp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"regfile_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"rs1_dependency",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"rs2_dependency",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+151,0,"compressed_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+152,0,"calu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"copsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+154,0,"calu1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"cmuldiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"clsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"cbrh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"cmisc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("RegisterFile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+352,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reserve",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"reserve_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+158,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+159,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+149,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"func4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+57,0,"rs1_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+58,0,"rs2_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+59,0,"rs1_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"rs2_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"writeback_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+104,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 15; ++i) {
        tracep->declBus(c+160+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("scoreboard", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 15; ++i) {
        tracep->declBit(c+175+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1));
    }
    tracep->popPrefix();
    tracep->declBus(c+190,0,"special_constant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("regfile_read", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+191+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+207,0,"scoreboard_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"rs1_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+58,0,"rs2_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+59,0,"scoreboard_buffer1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"scoreboard_buffer2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Divider", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+352,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"call",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"operation_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+62,0,"dest_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"data_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"data_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+96,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,0,"dest_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+95,0,"data_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"data_in1_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+210,0,"data_in2_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+211,0,"operation_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+94,0,"dest_addr_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+212,0,"preserved_data1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"preserved_data2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"cond_abs_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"cond_abs_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+216,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+217,0,"q_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+218,0,"i_ctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+219,0,"temp_a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+220,0,"temp_q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+221,0,"temp_a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+222,0,"temp_q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+223,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+95,0,"temp_valid_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"negate_results",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+226,0,"remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("iteration1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+216,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+217,0,"q_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+210,0,"m_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+219,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+220,0,"q_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+227,0,"stage1_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+228,0,"stage1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+229,0,"stage2_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+219,0,"stage3_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+220,0,"stage3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("iteration2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+220,0,"q_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+210,0,"m_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+221,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+222,0,"q_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+230,0,"stage1_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+231,0,"stage1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"stage2_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+221,0,"stage3_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+222,0,"stage3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("FetchStage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+352,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"icache_miss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+38,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+355,0,"address_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+38,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->pushPrefix("IssueStage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+234,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"wb_conflict_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"wb_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+104,0,"wb_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("uop_in", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+120,0,"call_alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"alu_type_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"alu_force_add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"alu_dsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+124,0,"call_mul",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"call_div",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"call_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"fence_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"call_brh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"brh_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+130,0,"jmp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"regfile_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"rs1_dependency",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"rs2_dependency",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+39,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+54,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+55,0,"jmp_target_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+56,0,"inc_pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+57,0,"rs1_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+58,0,"rs2_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+59,0,"rs1_busy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"rs2_busy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"regfile_reserve",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"reserve_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+63,0,"jmp_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"jmp_target_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+65,0,"pipeline_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+88,0,"call",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"dest_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+110,0,"data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+111,0,"data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+108,0,"operation",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+109,0,"type_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mul_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+72,0,"call",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"dest_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("div_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+77,0,"call",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"dest_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("brh_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+84,0,"call",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"func4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+86,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+78,0,"call",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"dest_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"store_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"func4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+82,0,"fence_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"fence_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBit(c+92,0,"mul_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"div_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"lsu_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"lsu_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"wb_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("inst", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+235,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+236,0,"func4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+237,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+238,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+239,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+240,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+241,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("j", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+242,0,"imm_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+243,0,"imm_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("b", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+244,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+245,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+246,0,"rs1_forward_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"rs2_forward_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"rs1_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"rs2_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("uop", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+250,0,"call_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"alu_type_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"alu_force_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"alu_dsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+254,0,"call_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"call_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"call_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"fence_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"call_brh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"brh_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+260,0,"jmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"regfile_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"rs1_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"rs2_dependency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+264,0,"inst_fence",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"exe_free",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"ifence_inval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+352,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"wb_conflict_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"call",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"dest_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"store_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"address_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"func4_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+82,0,"fence_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"fence_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+98,0,"lsq_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"lsu_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"wb_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+374,0,"wb_dest_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+375,0,"wb_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"mem_address_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+31,0,"mem_mask_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,0,"mem_read_fnc_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,0,"mem_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"mem_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+35,0,"mem_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"mem_wb_dest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"mem_input_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"mem_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+374,0,"mem_wb_dest_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+375,0,"mem_read_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"mem_available",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"mem_idle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+267,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+268,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+269,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+271,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+272,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+273,0,"stage1_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"generated_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("lsq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+275,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+276,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+277,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+278,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+279,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+280,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+281,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+282,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+283,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+284,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+285,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+286,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+287,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+288,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+289,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+290,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+291,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+292,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+293,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+294,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+295,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+296,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+297,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+298,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+299,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+300,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+301,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+302,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+305,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+306,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+307,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+308,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+309,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+310,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+311,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+312,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+313,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+314,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+315,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+316,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+317,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+318,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+319,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+320,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+321,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+322,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+323,0,"lsq_head_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+324,0,"lsq_tail_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+325,0,"lsq_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lsq_head_buffer", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+33,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+31,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,0,"data_fnc_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+34,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"wb_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+35,0,"lsq_head_buffer_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+352,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"call",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"operation_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+62,0,"dest_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"data_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"data_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+92,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"dest_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+91,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+326,0,"adj_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+327,0,"adj_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+328,0,"data1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"data2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"operation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+331,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+332,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("stage2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+333,0,"partial_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+334,0,"data1_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"data2_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+336,0,"operation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"dest_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+91,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+337,0,"neg_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+338,0,"adjusted_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WritebackStage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+352,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"clk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"sync_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+356,0,"alu_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"alu_dest_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+88,0,"alu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"mul_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"mul_dest_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+91,0,"mul_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"div_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,0,"div_dest_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+95,0,"div_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"lsu_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+374,0,"lsu_dest_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+375,0,"lsu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"conflict_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+105,0,"dest_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+106,0,"writeback_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+339,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+340,0,"dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+341,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+342,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+343,0,"dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+344,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("div", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+345,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+346,0,"dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+347,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("lsu", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+348,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+349,0,"dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+350,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+103,0,"wb_conflict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+351,0,"selector",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"selected_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+105,0,"selected_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("DetectConflict", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+378,0,"truth_table",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VCore_tb_m1___024root__trace_init_top(VCore_tb_m1___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCore_tb_m1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCore_tb_m1___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VCore_tb_m1___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCore_tb_m1___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCore_tb_m1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCore_tb_m1___024root__trace_register(VCore_tb_m1___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VCore_tb_m1___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VCore_tb_m1___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VCore_tb_m1___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VCore_tb_m1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCore_tb_m1___024root__trace_const_0_sub_0(VCore_tb_m1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCore_tb_m1___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root__trace_const_0\n"); );
    // Init
    VCore_tb_m1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore_tb_m1___024root*>(voidSelf);
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCore_tb_m1___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCore_tb_m1___024root__trace_const_0_sub_0(VCore_tb_m1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+372,(0U));
    bufp->fullSData(oldp+373,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_data_in),16);
    bufp->fullCData(oldp+374,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_wb_dest_in),4);
    bufp->fullBit(oldp+375,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_read_ack));
    bufp->fullBit(oldp+376,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_available));
    bufp->fullBit(oldp+377,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_idle));
    bufp->fullSData(oldp+378,(0xfee8U),16);
}

VL_ATTR_COLD void VCore_tb_m1___024root__trace_full_0_sub_0(VCore_tb_m1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCore_tb_m1___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root__trace_full_0\n"); );
    // Init
    VCore_tb_m1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore_tb_m1___024root*>(voidSelf);
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCore_tb_m1___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCore_tb_m1___024root__trace_full_0_sub_0(VCore_tb_m1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,((0xffffU & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[2U])),16);
    bufp->fullSData(oldp+2,((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[1U] 
                             >> 0x10U)),16);
    bufp->fullSData(oldp+3,((0xffffU & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[1U])),16);
    bufp->fullSData(oldp+4,((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[0U] 
                             >> 0x10U)),16);
    bufp->fullSData(oldp+5,((0xffffU & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[0U])),16);
    bufp->fullSData(oldp+6,((0xffffU & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[2U] 
                                        >> 1U))),16);
    bufp->fullIData(oldp+7,((0x1ffffU & ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[2U] 
                                          << 0x10U) 
                                         | (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[1U] 
                                            >> 0x10U)))),17);
    bufp->fullSData(oldp+8,((0xffffU & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[1U])),16);
    bufp->fullSData(oldp+9,((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[0U] 
                             >> 0x10U)),16);
    bufp->fullSData(oldp+10,((0xffffU & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[0U])),16);
    bufp->fullCData(oldp+11,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[0]),5);
    bufp->fullCData(oldp+12,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[1]),5);
    bufp->fullCData(oldp+13,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[2]),5);
    bufp->fullCData(oldp+14,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[3]),5);
    bufp->fullCData(oldp+15,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[4]),5);
    bufp->fullCData(oldp+16,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[5]),5);
    bufp->fullCData(oldp+17,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[6]),5);
    bufp->fullCData(oldp+18,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[7]),5);
    bufp->fullCData(oldp+19,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[8]),5);
    bufp->fullCData(oldp+20,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[9]),5);
    bufp->fullCData(oldp+21,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[10]),5);
    bufp->fullCData(oldp+22,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[11]),5);
    bufp->fullCData(oldp+23,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[12]),5);
    bufp->fullCData(oldp+24,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[13]),5);
    bufp->fullCData(oldp+25,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[14]),5);
    bufp->fullCData(oldp+26,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[15]),5);
    bufp->fullBit(oldp+27,((1U & (~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__DecodeStage__hazard_stall)))));
    bufp->fullSData(oldp+28,(vlSelfRef.Core_tb_m1__DOT__rom_buffer),16);
    bufp->fullSData(oldp+29,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__adjusted_instruction_in),16);
    bufp->fullSData(oldp+30,((0x7fffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer 
                                                 >> 0xaU)))),15);
    bufp->fullCData(oldp+31,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer 
                                            >> 8U)))),2);
    bufp->fullCData(oldp+32,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer 
                                            >> 6U)))),2);
    bufp->fullSData(oldp+33,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer 
                                                 >> 0x19U)))),16);
    bufp->fullCData(oldp+34,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer 
                                            >> 4U)))),2);
    bufp->fullBit(oldp+35,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer_valid));
    bufp->fullCData(oldp+36,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer))),4);
    bufp->fullBit(oldp+37,((1U & (~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__wb_conflict)))));
    bufp->fullSData(oldp+38,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__FetchStage__DOT__pc),15);
    bufp->fullSData(oldp+39,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer),12);
    bufp->fullBit(oldp+40,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 0x10U))));
    bufp->fullBit(oldp+41,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 0xfU))));
    bufp->fullBit(oldp+42,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 0xeU))));
    bufp->fullCData(oldp+43,((7U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                    >> 0xbU))),3);
    bufp->fullBit(oldp+44,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 0xaU))));
    bufp->fullBit(oldp+45,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 9U))));
    bufp->fullBit(oldp+46,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 8U))));
    bufp->fullBit(oldp+47,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 7U))));
    bufp->fullBit(oldp+48,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 6U))));
    bufp->fullCData(oldp+49,((3U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                    >> 4U))),2);
    bufp->fullBit(oldp+50,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 3U))));
    bufp->fullBit(oldp+51,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 2U))));
    bufp->fullBit(oldp+52,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                  >> 1U))));
    bufp->fullBit(oldp+53,((1U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer)));
    bufp->fullSData(oldp+54,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__pc_buffer),15);
    bufp->fullSData(oldp+55,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__jmp_tgt_buffer),15);
    bufp->fullSData(oldp+56,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__inc_pc_buffer),15);
    bufp->fullSData(oldp+57,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__rs1_buffer),16);
    bufp->fullSData(oldp+58,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__rs2_buffer),16);
    bufp->fullBit(oldp+59,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer1));
    bufp->fullBit(oldp+60,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2));
    bufp->fullBit(oldp+61,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__regfile_reserve));
    bufp->fullCData(oldp+62,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),4);
    bufp->fullBit(oldp+63,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__jmp_en));
    bufp->fullSData(oldp+64,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__jmp_target_out),15);
    bufp->fullBit(oldp+65,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__pipeline_stall));
    bufp->fullBit(oldp+66,((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                          >> 0x29U)))));
    bufp->fullCData(oldp+67,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                              >> 0x25U)))),4);
    bufp->fullSData(oldp+68,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 0x15U)))),16);
    bufp->fullSData(oldp+69,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 5U)))),16);
    bufp->fullCData(oldp+70,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                              >> 1U)))),4);
    bufp->fullBit(oldp+71,((1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out))));
    bufp->fullBit(oldp+72,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Multiplier__call));
    bufp->fullCData(oldp+73,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4 
                                            >> 0x24U)))),2);
    bufp->fullCData(oldp+74,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4 
                                              >> 0x20U)))),4);
    bufp->fullSData(oldp+75,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+76,((0xffffU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4))),16);
    bufp->fullBit(oldp+77,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Divider__call));
    bufp->fullBit(oldp+78,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__LSU__call));
    bufp->fullSData(oldp+79,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_data),16);
    bufp->fullSData(oldp+80,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_data),16);
    bufp->fullCData(oldp+81,((0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                      >> 4U))),4);
    bufp->fullBit(oldp+82,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__LSU__fence_mode));
    bufp->fullCData(oldp+83,((3U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),2);
    bufp->fullBit(oldp+84,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__BranchUnit__call));
    bufp->fullCData(oldp+85,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__BranchUnit__operation),2);
    bufp->fullCData(oldp+86,((0xffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                       >> 4U))),8);
    bufp->fullCData(oldp+87,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                              >> 0x25U)))),4);
    bufp->fullBit(oldp+88,((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                          >> 0x29U)))));
    bufp->fullSData(oldp+89,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__Multiplier__data_out),16);
    bufp->fullCData(oldp+90,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                              >> 1U)))),4);
    bufp->fullBit(oldp+91,((1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2))));
    bufp->fullBit(oldp+92,((1U & (~ ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1) 
                                     | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2))))));
    bufp->fullSData(oldp+93,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__Divider__data_out),16);
    bufp->fullCData(oldp+94,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__dest_addr_buffer),4);
    bufp->fullBit(oldp+95,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__temp_valid_flag));
    bufp->fullBit(oldp+96,((0U != (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__state))));
    bufp->fullBit(oldp+97,(((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1_valid)) 
                            & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_empty) 
                               & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_read_ack)) 
                                  & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_idle))))));
    bufp->fullBit(oldp+98,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__lsu_full));
    bufp->fullBit(oldp+99,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_flush));
    bufp->fullBit(oldp+100,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_issue_inval));
    bufp->fullSData(oldp+101,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_pc_tgt),15);
    bufp->fullBit(oldp+102,((1U & (~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__writeback_en)))));
    bufp->fullBit(oldp+103,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__wb_conflict));
    bufp->fullSData(oldp+104,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_data),16);
    bufp->fullCData(oldp+105,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_dest),4);
    bufp->fullBit(oldp+106,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__writeback_en));
    bufp->fullBit(oldp+107,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__reset_buffer));
    bufp->fullCData(oldp+108,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                               >> 1U)))),4);
    bufp->fullBit(oldp+109,((1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out))));
    bufp->fullSData(oldp+110,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                  >> 0x15U)))),16);
    bufp->fullSData(oldp+111,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                  >> 5U)))),16);
    bufp->fullSData(oldp+112,((0xffffU & ((IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                     >> 5U))))),16);
    bufp->fullSData(oldp+113,((0xffffU & ((IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                   >> 0x15U)) 
                                          | (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                     >> 5U))))),16);
    bufp->fullSData(oldp+114,((0xffffU & ((IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                     >> 5U))))),16);
    bufp->fullQData(oldp+115,((0xffffffffffffULL & 
                               ((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                               >> 1U)))
                                 ? ((((QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(
                                                                 (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                  >> 0x15U))))) 
                                      << 0x20U) | (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U))))))) 
                                    << (0xfU & (IData)(
                                                       (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                        >> 5U))))
                                 : ((0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                     >> 0x15U))))) 
                                         << 0x20U) 
                                        | (((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                        >> 0x15U))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                         >> 0x15U)))))))) 
                                    >> (0xfU & (IData)(
                                                       (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                        >> 5U))))))),48);
    bufp->fullSData(oldp+117,((0xffffU & (IData)((0xffffffffULL 
                                                  & (((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                  >> 1U)))
                                                       ? 
                                                      ((((QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U))))) 
                                                         << 0x20U) 
                                                        | (((QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U))))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(
                                                                                (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U))))))) 
                                                       << 
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                   >> 5U))))
                                                       : 
                                                      ((0xffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U))))) 
                                                            << 0x20U) 
                                                           | (((QData)((IData)(
                                                                               (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U))))) 
                                                               << 0x10U) 
                                                              | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                                >> 0x15U)))))))) 
                                                       >> 
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                   >> 5U))))) 
                                                     >> 0x10U))))),16);
    bufp->fullBit(oldp+118,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__DecodeStage__hazard_stall));
    bufp->fullBit(oldp+119,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__write_en));
    bufp->fullBit(oldp+120,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 0x10U))));
    bufp->fullBit(oldp+121,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 0xfU))));
    bufp->fullBit(oldp+122,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 0xeU))));
    bufp->fullCData(oldp+123,((7U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+124,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 0xaU))));
    bufp->fullBit(oldp+125,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 9U))));
    bufp->fullBit(oldp+126,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 8U))));
    bufp->fullBit(oldp+127,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 7U))));
    bufp->fullBit(oldp+128,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 6U))));
    bufp->fullCData(oldp+129,((3U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 4U))),2);
    bufp->fullBit(oldp+130,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 3U))));
    bufp->fullBit(oldp+131,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 2U))));
    bufp->fullBit(oldp+132,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                   >> 1U))));
    bufp->fullBit(oldp+133,((1U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer)));
    bufp->fullCData(oldp+134,((0x7fU & ((0x800U & (IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer))
                                         ? ((0x70U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                                               >> 0xfU)))) 
                                                << 4U)) 
                                            | (0xfU 
                                               & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                                  >> 0xcU)))
                                         : (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                                          >> 7U))))))),7);
    bufp->fullBit(oldp+135,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 0x10U))));
    bufp->fullBit(oldp+136,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 0xfU))));
    bufp->fullBit(oldp+137,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 0xeU))));
    bufp->fullCData(oldp+138,((7U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+139,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 0xaU))));
    bufp->fullBit(oldp+140,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 9U))));
    bufp->fullBit(oldp+141,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 8U))));
    bufp->fullBit(oldp+142,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 7U))));
    bufp->fullBit(oldp+143,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 6U))));
    bufp->fullCData(oldp+144,((3U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                     >> 4U))),2);
    bufp->fullBit(oldp+145,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 3U))));
    bufp->fullBit(oldp+146,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 2U))));
    bufp->fullBit(oldp+147,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                   >> 1U))));
    bufp->fullBit(oldp+148,((1U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop)));
    bufp->fullCData(oldp+149,((0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+150,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer))),4);
    bufp->fullCData(oldp+151,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop),8);
    bufp->fullBit(oldp+152,((1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop))));
    bufp->fullCData(oldp+153,((7U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                     >> 1U))),3);
    bufp->fullBit(oldp+154,((1U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                   >> 4U))));
    bufp->fullBit(oldp+155,((1U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                   >> 5U))));
    bufp->fullBit(oldp+156,((1U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                   >> 6U))));
    bufp->fullBit(oldp+157,((1U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                   >> 7U))));
    bufp->fullCData(oldp+158,((0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+159,((0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                       >> 4U))),4);
    bufp->fullSData(oldp+160,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[0]),16);
    bufp->fullSData(oldp+161,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[1]),16);
    bufp->fullSData(oldp+162,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[2]),16);
    bufp->fullSData(oldp+163,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[3]),16);
    bufp->fullSData(oldp+164,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[4]),16);
    bufp->fullSData(oldp+165,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[5]),16);
    bufp->fullSData(oldp+166,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[6]),16);
    bufp->fullSData(oldp+167,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[7]),16);
    bufp->fullSData(oldp+168,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[8]),16);
    bufp->fullSData(oldp+169,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[9]),16);
    bufp->fullSData(oldp+170,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[10]),16);
    bufp->fullSData(oldp+171,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[11]),16);
    bufp->fullSData(oldp+172,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[12]),16);
    bufp->fullSData(oldp+173,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[13]),16);
    bufp->fullSData(oldp+174,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[14]),16);
    bufp->fullBit(oldp+175,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0]));
    bufp->fullBit(oldp+176,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[1]));
    bufp->fullBit(oldp+177,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[2]));
    bufp->fullBit(oldp+178,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[3]));
    bufp->fullBit(oldp+179,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[4]));
    bufp->fullBit(oldp+180,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[5]));
    bufp->fullBit(oldp+181,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[6]));
    bufp->fullBit(oldp+182,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[7]));
    bufp->fullBit(oldp+183,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[8]));
    bufp->fullBit(oldp+184,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[9]));
    bufp->fullBit(oldp+185,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[10]));
    bufp->fullBit(oldp+186,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[11]));
    bufp->fullBit(oldp+187,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[12]));
    bufp->fullBit(oldp+188,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[13]));
    bufp->fullBit(oldp+189,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[14]));
    bufp->fullSData(oldp+190,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant),16);
    bufp->fullSData(oldp+191,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0]),16);
    bufp->fullSData(oldp+192,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[1]),16);
    bufp->fullSData(oldp+193,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[2]),16);
    bufp->fullSData(oldp+194,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[3]),16);
    bufp->fullSData(oldp+195,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[4]),16);
    bufp->fullSData(oldp+196,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[5]),16);
    bufp->fullSData(oldp+197,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[6]),16);
    bufp->fullSData(oldp+198,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[7]),16);
    bufp->fullSData(oldp+199,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[8]),16);
    bufp->fullSData(oldp+200,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[9]),16);
    bufp->fullSData(oldp+201,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[10]),16);
    bufp->fullSData(oldp+202,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[11]),16);
    bufp->fullSData(oldp+203,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[12]),16);
    bufp->fullSData(oldp+204,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[13]),16);
    bufp->fullSData(oldp+205,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[14]),16);
    bufp->fullSData(oldp+206,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[15]),16);
    bufp->fullSData(oldp+207,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_read),16);
    bufp->fullCData(oldp+208,((3U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                     >> 4U))),2);
    bufp->fullSData(oldp+209,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in1_buffer),16);
    bufp->fullSData(oldp+210,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer),16);
    bufp->fullCData(oldp+211,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__operation_buffer),2);
    bufp->fullBit(oldp+212,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__preserved_data1_sign));
    bufp->fullBit(oldp+213,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__preserved_data2_sign));
    bufp->fullSData(oldp+214,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__cond_abs_data1),16);
    bufp->fullSData(oldp+215,((0xffffU & (((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__operation_buffer)) 
                                           & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer) 
                                              >> 0xfU))
                                           ? (- (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer))
                                           : (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer)))),16);
    bufp->fullIData(oldp+216,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__a_reg),17);
    bufp->fullSData(oldp+217,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg),16);
    bufp->fullCData(oldp+218,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__i_ctr),3);
    bufp->fullIData(oldp+219,(((0x8000U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a)
                                ? vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage1_a
                                : vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a)),17);
    bufp->fullSData(oldp+220,(((0xfffeU & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg), 1U)) 
                               | (1U & (~ (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                           >> 0x10U))))),16);
    bufp->fullIData(oldp+221,(((0x8000U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage2_a)
                                ? vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage1_a
                                : vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage2_a)),17);
    bufp->fullSData(oldp+222,(((0xfffeU & VL_SHIFTL_III(32,16,32, 
                                                        ((0xfffeU 
                                                          & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg), 1U)) 
                                                         | (1U 
                                                            & (~ 
                                                               (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                                                >> 0x10U)))), 1U)) 
                               | (1U & (~ (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage2_a 
                                           >> 0x10U))))),16);
    bufp->fullCData(oldp+223,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__state),2);
    bufp->fullBit(oldp+224,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__negate_results));
    bufp->fullSData(oldp+225,((0xffffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__negate_results)
                                           ? (- (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg))
                                           : (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg)))),16);
    bufp->fullSData(oldp+226,((0xffffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__negate_results)
                                           ? (- vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__a_reg)
                                           : vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__a_reg))),16);
    bufp->fullIData(oldp+227,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage1_a),17);
    bufp->fullSData(oldp+228,((0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg), 1U))),16);
    bufp->fullIData(oldp+229,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a),17);
    bufp->fullIData(oldp+230,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage1_a),17);
    bufp->fullSData(oldp+231,((0xffffU & VL_SHIFTL_III(16,16,32, 
                                                       ((0xfffeU 
                                                         & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg), 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                                               >> 0x10U)))), 1U))),16);
    bufp->fullIData(oldp+232,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage2_a),17);
    bufp->fullSData(oldp+233,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__data_in),15);
    bufp->fullBit(oldp+234,(((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_flush) 
                             | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_issue_inval))));
    bufp->fullCData(oldp+235,((0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+236,((0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+237,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),4);
    bufp->fullCData(oldp+238,((0xffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                        >> 4U))),8);
    bufp->fullCData(oldp+239,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),4);
    bufp->fullCData(oldp+240,((0xffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                        >> 4U))),8);
    bufp->fullCData(oldp+241,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),4);
    bufp->fullCData(oldp+242,((0xffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                        >> 4U))),8);
    bufp->fullCData(oldp+243,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),4);
    bufp->fullCData(oldp+244,((0xffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                        >> 4U))),8);
    bufp->fullCData(oldp+245,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),4);
    bufp->fullBit(oldp+246,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_forward_en));
    bufp->fullBit(oldp+247,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_forward_en));
    bufp->fullBit(oldp+248,(((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_forward_en)) 
                             & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer1) 
                                & (IData)((0U != (6U 
                                                  & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer)))))));
    bufp->fullBit(oldp+249,(((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_forward_en)) 
                             & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2) 
                                & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer))));
    bufp->fullBit(oldp+250,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                   >> 0x10U))));
    bufp->fullBit(oldp+251,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                   >> 0xfU))));
    bufp->fullBit(oldp+252,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                   >> 0xeU))));
    bufp->fullCData(oldp+253,((7U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                     >> 0xbU))),3);
    bufp->fullBit(oldp+254,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                   >> 0xaU))));
    bufp->fullBit(oldp+255,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                   >> 9U))));
    bufp->fullBit(oldp+256,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                   >> 8U))));
    bufp->fullBit(oldp+257,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                   >> 7U))));
    bufp->fullBit(oldp+258,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                   >> 6U))));
    bufp->fullCData(oldp+259,((3U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                     >> 4U))),2);
    bufp->fullBit(oldp+260,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                   >> 3U))));
    bufp->fullBit(oldp+261,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                   >> 2U))));
    bufp->fullBit(oldp+262,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                   >> 1U))));
    bufp->fullBit(oldp+263,((1U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop)));
    bufp->fullBit(oldp+264,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__inst_fence));
    bufp->fullBit(oldp+265,(((0U == (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__state)) 
                             & ((~ ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1) 
                                    | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2))) 
                                & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__writeback_en)) 
                                   & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1_valid)) 
                                      & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_empty) 
                                         & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_read_ack)) 
                                            & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_idle)))))))));
    bufp->fullBit(oldp+266,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__ifence_inval));
    bufp->fullSData(oldp+267,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+268,((0x7fffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+269,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1 
                                             >> 8U)))),2);
    bufp->fullCData(oldp+270,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1 
                                             >> 6U)))),2);
    bufp->fullCData(oldp+271,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1 
                                             >> 4U)))),2);
    bufp->fullCData(oldp+272,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1))),4);
    bufp->fullBit(oldp+273,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1_valid));
    bufp->fullCData(oldp+274,(((0U == ((2U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                              >> 3U)) 
                                       | (1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_data))))
                                ? 2U : ((1U == ((2U 
                                                 & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_data))))
                                         ? 1U : 3U))),2);
    bufp->fullSData(oldp+275,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [0U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+276,((0x7fffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [0U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+277,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [0U] >> 8U)))),2);
    bufp->fullCData(oldp+278,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [0U] >> 6U)))),2);
    bufp->fullCData(oldp+279,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [0U] >> 4U)))),2);
    bufp->fullCData(oldp+280,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                              [0U]))),4);
    bufp->fullSData(oldp+281,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [1U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+282,((0x7fffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [1U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+283,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [1U] >> 8U)))),2);
    bufp->fullCData(oldp+284,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [1U] >> 6U)))),2);
    bufp->fullCData(oldp+285,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [1U] >> 4U)))),2);
    bufp->fullCData(oldp+286,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                              [1U]))),4);
    bufp->fullSData(oldp+287,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [2U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+288,((0x7fffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [2U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+289,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [2U] >> 8U)))),2);
    bufp->fullCData(oldp+290,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [2U] >> 6U)))),2);
    bufp->fullCData(oldp+291,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [2U] >> 4U)))),2);
    bufp->fullCData(oldp+292,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                              [2U]))),4);
    bufp->fullSData(oldp+293,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [3U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+294,((0x7fffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [3U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+295,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [3U] >> 8U)))),2);
    bufp->fullCData(oldp+296,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [3U] >> 6U)))),2);
    bufp->fullCData(oldp+297,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [3U] >> 4U)))),2);
    bufp->fullCData(oldp+298,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                              [3U]))),4);
    bufp->fullSData(oldp+299,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [4U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+300,((0x7fffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [4U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+301,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [4U] >> 8U)))),2);
    bufp->fullCData(oldp+302,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [4U] >> 6U)))),2);
    bufp->fullCData(oldp+303,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [4U] >> 4U)))),2);
    bufp->fullCData(oldp+304,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                              [4U]))),4);
    bufp->fullSData(oldp+305,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [5U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+306,((0x7fffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [5U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+307,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [5U] >> 8U)))),2);
    bufp->fullCData(oldp+308,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [5U] >> 6U)))),2);
    bufp->fullCData(oldp+309,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [5U] >> 4U)))),2);
    bufp->fullCData(oldp+310,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                              [5U]))),4);
    bufp->fullSData(oldp+311,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [6U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+312,((0x7fffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [6U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+313,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [6U] >> 8U)))),2);
    bufp->fullCData(oldp+314,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [6U] >> 6U)))),2);
    bufp->fullCData(oldp+315,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [6U] >> 4U)))),2);
    bufp->fullCData(oldp+316,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                              [6U]))),4);
    bufp->fullSData(oldp+317,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [7U] 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+318,((0x7fffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                  [7U] 
                                                  >> 0xaU)))),15);
    bufp->fullCData(oldp+319,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [7U] >> 8U)))),2);
    bufp->fullCData(oldp+320,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [7U] >> 6U)))),2);
    bufp->fullCData(oldp+321,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                             [7U] >> 4U)))),2);
    bufp->fullCData(oldp+322,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                              [7U]))),4);
    bufp->fullCData(oldp+323,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_ptr),4);
    bufp->fullCData(oldp+324,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_tail_ptr),4);
    bufp->fullBit(oldp+325,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_empty));
    bufp->fullSData(oldp+326,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 
                                                  >> 0x19U)))),16);
    bufp->fullSData(oldp+327,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 
                                                  >> 9U)))),16);
    bufp->fullBit(oldp+328,((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 
                                           >> 8U)))));
    bufp->fullBit(oldp+329,((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 
                                           >> 7U)))));
    bufp->fullCData(oldp+330,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 
                                             >> 5U)))),2);
    bufp->fullCData(oldp+331,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 
                                               >> 1U)))),4);
    bufp->fullBit(oldp+332,((1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1))));
    bufp->fullIData(oldp+333,((IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                       >> 9U))),32);
    bufp->fullBit(oldp+334,((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                           >> 8U)))));
    bufp->fullBit(oldp+335,((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                           >> 7U)))));
    bufp->fullCData(oldp+336,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                             >> 5U)))),2);
    bufp->fullBit(oldp+337,((1U & (((0U != (3U & (IData)(
                                                         (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                                          >> 5U)))) 
                                    & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                               >> 7U))) 
                                   ^ (IData)((0xc0ULL 
                                              == (0xc0ULL 
                                                  & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2)))))));
    bufp->fullIData(oldp+338,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__adjusted_result),32);
    bufp->fullSData(oldp+339,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu
                              .__PVT__data),16);
    bufp->fullCData(oldp+340,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu
                              .__PVT__dest),4);
    bufp->fullBit(oldp+341,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu
                            .__PVT__valid));
    bufp->fullSData(oldp+342,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul
                              .__PVT__data),16);
    bufp->fullCData(oldp+343,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul
                              .__PVT__dest),4);
    bufp->fullBit(oldp+344,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul
                            .__PVT__valid));
    bufp->fullSData(oldp+345,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                              .__PVT__data),16);
    bufp->fullCData(oldp+346,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                              .__PVT__dest),4);
    bufp->fullBit(oldp+347,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                            .__PVT__valid));
    bufp->fullSData(oldp+348,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                              .__PVT__data),16);
    bufp->fullCData(oldp+349,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                              .__PVT__dest),4);
    bufp->fullBit(oldp+350,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                            .__PVT__valid));
    bufp->fullCData(oldp+351,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selector),2);
    bufp->fullBit(oldp+352,(vlSelfRef.clk));
    bufp->fullBit(oldp+353,(vlSelfRef.clk_en));
    bufp->fullBit(oldp+354,(vlSelfRef.sync_rst));
    bufp->fullSData(oldp+355,(((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__sync_rst)
                                ? 0U : (0x7fffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__write_en)
                                                    ? (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__data_in)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__FetchStage__DOT__pc)))))),15);
    bufp->fullSData(oldp+356,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__ALU__data_out),16);
    bufp->fullSData(oldp+357,((0xffffU & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub 
                                          >> 3U))),16);
    bufp->fullBit(oldp+358,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub 
                                   >> 2U))));
    bufp->fullBit(oldp+359,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub 
                                   >> 1U))));
    bufp->fullBit(oldp+360,((1U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub)));
    bufp->fullSData(oldp+361,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__selected_ihb),16);
    bufp->fullSData(oldp+362,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip 
                                                  >> 0x30U)))),16);
    bufp->fullSData(oldp+363,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip 
                                                  >> 0x20U)))),16);
    bufp->fullSData(oldp+364,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip 
                                                  >> 0x10U)))),16);
    bufp->fullSData(oldp+365,((0xffffU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip))),16);
    bufp->fullSData(oldp+366,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__int_selected_result0),16);
    bufp->fullBit(oldp+367,((1U & ((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                  >> 3U)))
                                    ? ((1U & (IData)(
                                                     (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                      >> 2U)))
                                        ? ((1U & (IData)(
                                                         (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 1U)))
                                            ? (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0xffffU 
                                                           & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub 
                                                              >> 3U)))))
                                            : (IData)(
                                                      (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                       >> 
                                                       ((IData)(0x15U) 
                                                        + 
                                                        (0xfU 
                                                         & (IData)(
                                                                   (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                    >> 5U)))))))
                                        : ((1U & (IData)(
                                                         (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 1U)))
                                            ? vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub
                                            : (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub 
                                               >> 1U)))
                                    : ((1U & (IData)(
                                                     (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                      >> 2U)))
                                        ? ((1U & (IData)(
                                                         (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 1U)))
                                            ? (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub 
                                               >> 1U)
                                            : (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub 
                                               >> 2U))
                                        : ((1U & (IData)(
                                                         (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                          >> 1U)))
                                            ? (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub 
                                               >> 2U)
                                            : (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                                      >> 5U))))))))))));
    bufp->fullBit(oldp+368,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__sync_rst));
    bufp->fullBit(oldp+369,(((~ ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__temp_valid_flag) 
                                 & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__wb_conflict))) 
                             & (IData)(vlSelfRef.clk_en))));
    bufp->fullBit(oldp+370,(((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__DecodeStage__hazard_stall)) 
                             & (IData)(vlSelfRef.clk_en))));
    bufp->fullBit(oldp+371,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Multiplier__clk_en));
}
