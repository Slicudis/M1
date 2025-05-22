// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCore_tb_m1__Syms.h"


void VCore_tb_m1___024root__trace_chg_0_sub_0(VCore_tb_m1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCore_tb_m1___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root__trace_chg_0\n"); );
    // Init
    VCore_tb_m1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore_tb_m1___024root*>(voidSelf);
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCore_tb_m1___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VCore_tb_m1___024root__trace_chg_0_sub_0(VCore_tb_m1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [6U]))) {
        bufp->chgSData(oldp+0,((0xffffU & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[2U])),16);
        bufp->chgSData(oldp+1,((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[1U] 
                                >> 0x10U)),16);
        bufp->chgSData(oldp+2,((0xffffU & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[1U])),16);
        bufp->chgSData(oldp+3,((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[0U] 
                                >> 0x10U)),16);
        bufp->chgSData(oldp+4,((0xffffU & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bscan[0U])),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U] 
                     | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgSData(oldp+5,((0xffffU & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[2U] 
                                           >> 1U))),16);
        bufp->chgIData(oldp+6,((0x1ffffU & ((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[2U] 
                                             << 0x10U) 
                                            | (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[1U] 
                                               >> 0x10U)))),17);
        bufp->chgSData(oldp+7,((0xffffU & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[1U])),16);
        bufp->chgSData(oldp+8,((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[0U] 
                                >> 0x10U)),16);
        bufp->chgSData(oldp+9,((0xffffU & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__shifter[0U])),16);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [3U] | vlSelfRef.__Vm_traceActivity
                       [4U]) | vlSelfRef.__Vm_traceActivity
                      [8U]) | vlSelfRef.__Vm_traceActivity
                     [9U]))) {
        bufp->chgCData(oldp+10,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[0]),5);
        bufp->chgCData(oldp+11,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[1]),5);
        bufp->chgCData(oldp+12,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[2]),5);
        bufp->chgCData(oldp+13,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[3]),5);
        bufp->chgCData(oldp+14,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[4]),5);
        bufp->chgCData(oldp+15,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[5]),5);
        bufp->chgCData(oldp+16,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[6]),5);
        bufp->chgCData(oldp+17,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[7]),5);
        bufp->chgCData(oldp+18,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[8]),5);
        bufp->chgCData(oldp+19,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[9]),5);
        bufp->chgCData(oldp+20,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[10]),5);
        bufp->chgCData(oldp+21,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[11]),5);
        bufp->chgCData(oldp+22,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[12]),5);
        bufp->chgCData(oldp+23,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[13]),5);
        bufp->chgCData(oldp+24,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[14]),5);
        bufp->chgCData(oldp+25,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bitscan_vals[15]),5);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+26,((1U & (~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__DecodeStage__hazard_stall)))));
        bufp->chgSData(oldp+27,(vlSelfRef.Core_tb_m1__DOT__rom_buffer),16);
        bufp->chgSData(oldp+28,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__adjusted_instruction_in),16);
        bufp->chgSData(oldp+29,((0x7fffU & (IData)(
                                                   (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer 
                                                    >> 0xaU)))),15);
        bufp->chgCData(oldp+30,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer 
                                               >> 8U)))),2);
        bufp->chgCData(oldp+31,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer 
                                               >> 6U)))),2);
        bufp->chgSData(oldp+32,((0xffffU & (IData)(
                                                   (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer 
                                                    >> 0x19U)))),16);
        bufp->chgCData(oldp+33,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer 
                                               >> 4U)))),2);
        bufp->chgBit(oldp+34,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer_valid));
        bufp->chgCData(oldp+35,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_buffer))),4);
        bufp->chgBit(oldp+36,((1U & (~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__wb_conflict)))));
        bufp->chgSData(oldp+37,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__FetchStage__DOT__pc),15);
        bufp->chgSData(oldp+38,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer),12);
        bufp->chgBit(oldp+39,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 0x10U))));
        bufp->chgBit(oldp+40,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 0xfU))));
        bufp->chgBit(oldp+41,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 0xeU))));
        bufp->chgCData(oldp+42,((7U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                       >> 0xbU))),3);
        bufp->chgBit(oldp+43,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 0xaU))));
        bufp->chgBit(oldp+44,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 9U))));
        bufp->chgBit(oldp+45,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 8U))));
        bufp->chgBit(oldp+46,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 7U))));
        bufp->chgBit(oldp+47,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 6U))));
        bufp->chgCData(oldp+48,((3U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                       >> 4U))),2);
        bufp->chgBit(oldp+49,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 3U))));
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 2U))));
        bufp->chgBit(oldp+51,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 1U))));
        bufp->chgBit(oldp+52,((1U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer)));
        bufp->chgSData(oldp+53,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__pc_buffer),15);
        bufp->chgSData(oldp+54,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__jmp_tgt_buffer),15);
        bufp->chgSData(oldp+55,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__inc_pc_buffer),15);
        bufp->chgSData(oldp+56,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__rs1_buffer),16);
        bufp->chgSData(oldp+57,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__rs2_buffer),16);
        bufp->chgBit(oldp+58,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer1));
        bufp->chgBit(oldp+59,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2));
        bufp->chgBit(oldp+60,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__regfile_reserve));
        bufp->chgCData(oldp+61,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),4);
        bufp->chgBit(oldp+62,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__jmp_en));
        bufp->chgSData(oldp+63,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__jmp_target_out),15);
        bufp->chgBit(oldp+64,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__pipeline_stall));
        bufp->chgBit(oldp+65,((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                             >> 0x29U)))));
        bufp->chgCData(oldp+66,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 0x25U)))),4);
        bufp->chgSData(oldp+67,((0xffffU & (IData)(
                                                   (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                    >> 0x15U)))),16);
        bufp->chgSData(oldp+68,((0xffffU & (IData)(
                                                   (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                    >> 5U)))),16);
        bufp->chgCData(oldp+69,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 1U)))),4);
        bufp->chgBit(oldp+70,((1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out))));
        bufp->chgBit(oldp+71,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Multiplier__call));
        bufp->chgCData(oldp+72,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4 
                                               >> 0x24U)))),2);
        bufp->chgCData(oldp+73,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4 
                                                 >> 0x20U)))),4);
        bufp->chgSData(oldp+74,((0xffffU & (IData)(
                                                   (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+75,((0xffffU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_4))),16);
        bufp->chgBit(oldp+76,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Divider__call));
        bufp->chgBit(oldp+77,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__LSU__call));
        bufp->chgSData(oldp+78,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_data),16);
        bufp->chgSData(oldp+79,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_data),16);
        bufp->chgCData(oldp+80,((0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                         >> 4U))),4);
        bufp->chgBit(oldp+81,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__LSU__fence_mode));
        bufp->chgCData(oldp+82,((3U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),2);
        bufp->chgBit(oldp+83,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__BranchUnit__call));
        bufp->chgCData(oldp+84,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__BranchUnit__operation),2);
        bufp->chgCData(oldp+85,((0xffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                          >> 4U))),8);
        bufp->chgCData(oldp+86,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 0x25U)))),4);
        bufp->chgBit(oldp+87,((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                             >> 0x29U)))));
        bufp->chgSData(oldp+88,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__Multiplier__data_out),16);
        bufp->chgCData(oldp+89,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                                 >> 1U)))),4);
        bufp->chgBit(oldp+90,((1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2))));
        bufp->chgBit(oldp+91,((1U & (~ ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1) 
                                        | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2))))));
        bufp->chgSData(oldp+92,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__Divider__data_out),16);
        bufp->chgCData(oldp+93,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__dest_addr_buffer),4);
        bufp->chgBit(oldp+94,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__temp_valid_flag));
        bufp->chgBit(oldp+95,((0U != (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__state))));
        bufp->chgBit(oldp+96,(((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1_valid)) 
                               & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_empty) 
                                  & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_read_ack)) 
                                     & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_idle))))));
        bufp->chgBit(oldp+97,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__lsu_full));
        bufp->chgBit(oldp+98,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_flush));
        bufp->chgBit(oldp+99,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_issue_inval));
        bufp->chgSData(oldp+100,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_pc_tgt),15);
        bufp->chgBit(oldp+101,((1U & (~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__writeback_en)))));
        bufp->chgBit(oldp+102,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__wb_conflict));
        bufp->chgSData(oldp+103,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_data),16);
        bufp->chgCData(oldp+104,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selected_dest),4);
        bufp->chgBit(oldp+105,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__writeback_en));
        bufp->chgBit(oldp+106,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__reset_buffer));
        bufp->chgCData(oldp+107,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                  >> 1U)))),4);
        bufp->chgBit(oldp+108,((1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out))));
        bufp->chgSData(oldp+109,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                     >> 0x15U)))),16);
        bufp->chgSData(oldp+110,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                     >> 5U)))),16);
        bufp->chgSData(oldp+111,((0xffffU & ((IData)(
                                                     (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                      >> 0x15U)) 
                                             & (IData)(
                                                       (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                        >> 5U))))),16);
        bufp->chgSData(oldp+112,((0xffffU & ((IData)(
                                                     (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                      >> 0x15U)) 
                                             | (IData)(
                                                       (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                        >> 5U))))),16);
        bufp->chgSData(oldp+113,((0xffffU & ((IData)(
                                                     (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                      >> 0x15U)) 
                                             ^ (IData)(
                                                       (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                        >> 5U))))),16);
        bufp->chgQData(oldp+114,((0xffffffffffffULL 
                                  & ((1U & (IData)(
                                                   (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
                                                    >> 1U)))
                                      ? ((((QData)((IData)(
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
        bufp->chgSData(oldp+116,((0xffffU & (IData)(
                                                    (0xffffffffULL 
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
        bufp->chgBit(oldp+117,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__DecodeStage__hazard_stall));
        bufp->chgBit(oldp+118,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__write_en));
        bufp->chgBit(oldp+119,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 0x10U))));
        bufp->chgBit(oldp+120,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 0xfU))));
        bufp->chgBit(oldp+121,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 0xeU))));
        bufp->chgCData(oldp+122,((7U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                        >> 0xbU))),3);
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 0xaU))));
        bufp->chgBit(oldp+124,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 9U))));
        bufp->chgBit(oldp+125,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 8U))));
        bufp->chgBit(oldp+126,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 7U))));
        bufp->chgBit(oldp+127,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 6U))));
        bufp->chgCData(oldp+128,((3U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                        >> 4U))),2);
        bufp->chgBit(oldp+129,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 3U))));
        bufp->chgBit(oldp+130,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 2U))));
        bufp->chgBit(oldp+131,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 1U))));
        bufp->chgBit(oldp+132,((1U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer)));
        bufp->chgCData(oldp+133,((0x7fU & ((0x800U 
                                            & (IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer))
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
        bufp->chgBit(oldp+134,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 0x10U))));
        bufp->chgBit(oldp+135,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 0xfU))));
        bufp->chgBit(oldp+136,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 0xeU))));
        bufp->chgCData(oldp+137,((7U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                        >> 0xbU))),3);
        bufp->chgBit(oldp+138,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 0xaU))));
        bufp->chgBit(oldp+139,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 9U))));
        bufp->chgBit(oldp+140,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 8U))));
        bufp->chgBit(oldp+141,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 7U))));
        bufp->chgBit(oldp+142,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 6U))));
        bufp->chgCData(oldp+143,((3U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                        >> 4U))),2);
        bufp->chgBit(oldp+144,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 3U))));
        bufp->chgBit(oldp+145,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 2U))));
        bufp->chgBit(oldp+146,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 1U))));
        bufp->chgBit(oldp+147,((1U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__decoded_uop)));
        bufp->chgCData(oldp+148,((0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                          >> 8U))),4);
        bufp->chgCData(oldp+149,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer))),4);
        bufp->chgCData(oldp+150,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop),8);
        bufp->chgBit(oldp+151,((1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop))));
        bufp->chgCData(oldp+152,((7U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                        >> 1U))),3);
        bufp->chgBit(oldp+153,((1U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                      >> 4U))));
        bufp->chgBit(oldp+154,((1U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                      >> 5U))));
        bufp->chgBit(oldp+155,((1U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                      >> 6U))));
        bufp->chgBit(oldp+156,((1U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                      >> 7U))));
        bufp->chgCData(oldp+157,((0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+158,((0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__rom_buffer) 
                                          >> 4U))),4);
        bufp->chgSData(oldp+159,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[0]),16);
        bufp->chgSData(oldp+160,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[1]),16);
        bufp->chgSData(oldp+161,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[2]),16);
        bufp->chgSData(oldp+162,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[3]),16);
        bufp->chgSData(oldp+163,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[4]),16);
        bufp->chgSData(oldp+164,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[5]),16);
        bufp->chgSData(oldp+165,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[6]),16);
        bufp->chgSData(oldp+166,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[7]),16);
        bufp->chgSData(oldp+167,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[8]),16);
        bufp->chgSData(oldp+168,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[9]),16);
        bufp->chgSData(oldp+169,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[10]),16);
        bufp->chgSData(oldp+170,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[11]),16);
        bufp->chgSData(oldp+171,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[12]),16);
        bufp->chgSData(oldp+172,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[13]),16);
        bufp->chgSData(oldp+173,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[14]),16);
        bufp->chgBit(oldp+174,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0]));
        bufp->chgBit(oldp+175,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[1]));
        bufp->chgBit(oldp+176,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[2]));
        bufp->chgBit(oldp+177,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[3]));
        bufp->chgBit(oldp+178,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[4]));
        bufp->chgBit(oldp+179,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[5]));
        bufp->chgBit(oldp+180,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[6]));
        bufp->chgBit(oldp+181,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[7]));
        bufp->chgBit(oldp+182,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[8]));
        bufp->chgBit(oldp+183,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[9]));
        bufp->chgBit(oldp+184,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[10]));
        bufp->chgBit(oldp+185,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[11]));
        bufp->chgBit(oldp+186,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[12]));
        bufp->chgBit(oldp+187,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[13]));
        bufp->chgBit(oldp+188,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[14]));
        bufp->chgSData(oldp+189,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant),16);
        bufp->chgSData(oldp+190,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0]),16);
        bufp->chgSData(oldp+191,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[1]),16);
        bufp->chgSData(oldp+192,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[2]),16);
        bufp->chgSData(oldp+193,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[3]),16);
        bufp->chgSData(oldp+194,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[4]),16);
        bufp->chgSData(oldp+195,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[5]),16);
        bufp->chgSData(oldp+196,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[6]),16);
        bufp->chgSData(oldp+197,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[7]),16);
        bufp->chgSData(oldp+198,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[8]),16);
        bufp->chgSData(oldp+199,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[9]),16);
        bufp->chgSData(oldp+200,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[10]),16);
        bufp->chgSData(oldp+201,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[11]),16);
        bufp->chgSData(oldp+202,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[12]),16);
        bufp->chgSData(oldp+203,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[13]),16);
        bufp->chgSData(oldp+204,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[14]),16);
        bufp->chgSData(oldp+205,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[15]),16);
        bufp->chgSData(oldp+206,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_read),16);
        bufp->chgCData(oldp+207,((3U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                        >> 4U))),2);
        bufp->chgSData(oldp+208,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in1_buffer),16);
        bufp->chgSData(oldp+209,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer),16);
        bufp->chgCData(oldp+210,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__operation_buffer),2);
        bufp->chgBit(oldp+211,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__preserved_data1_sign));
        bufp->chgBit(oldp+212,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__preserved_data2_sign));
        bufp->chgSData(oldp+213,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__cond_abs_data1),16);
        bufp->chgSData(oldp+214,((0xffffU & (((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__operation_buffer)) 
                                              & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer) 
                                                 >> 0xfU))
                                              ? (- (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer))
                                              : (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__data_in2_buffer)))),16);
        bufp->chgIData(oldp+215,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__a_reg),17);
        bufp->chgSData(oldp+216,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg),16);
        bufp->chgCData(oldp+217,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__i_ctr),3);
        bufp->chgIData(oldp+218,(((0x8000U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a)
                                   ? vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage1_a
                                   : vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a)),17);
        bufp->chgSData(oldp+219,(((0xfffeU & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg), 1U)) 
                                  | (1U & (~ (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                              >> 0x10U))))),16);
        bufp->chgIData(oldp+220,(((0x8000U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage2_a)
                                   ? vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage1_a
                                   : vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage2_a)),17);
        bufp->chgSData(oldp+221,(((0xfffeU & VL_SHIFTL_III(32,16,32, 
                                                           ((0xfffeU 
                                                             & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg), 1U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                                                   >> 0x10U)))), 1U)) 
                                  | (1U & (~ (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage2_a 
                                              >> 0x10U))))),16);
        bufp->chgCData(oldp+222,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__state),2);
        bufp->chgBit(oldp+223,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__negate_results));
        bufp->chgSData(oldp+224,((0xffffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__negate_results)
                                              ? (- (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg))
                                              : (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg)))),16);
        bufp->chgSData(oldp+225,((0xffffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__negate_results)
                                              ? (- vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__a_reg)
                                              : vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__a_reg))),16);
        bufp->chgIData(oldp+226,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage1_a),17);
        bufp->chgSData(oldp+227,((0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg), 1U))),16);
        bufp->chgIData(oldp+228,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a),17);
        bufp->chgIData(oldp+229,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage1_a),17);
        bufp->chgSData(oldp+230,((0xffffU & VL_SHIFTL_III(16,16,32, 
                                                          ((0xfffeU 
                                                            & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__q_reg), 1U)) 
                                                           | (1U 
                                                              & (~ 
                                                                 (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                                                  >> 0x10U)))), 1U))),16);
        bufp->chgIData(oldp+231,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__iteration2__DOT__stage2_a),17);
        bufp->chgSData(oldp+232,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__data_in),15);
        bufp->chgBit(oldp+233,(((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_flush) 
                                | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__brh_issue_inval))));
        bufp->chgCData(oldp+234,((0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                          >> 8U))),4);
        bufp->chgCData(oldp+235,((0xfU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+236,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),4);
        bufp->chgCData(oldp+237,((0xffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                           >> 4U))),8);
        bufp->chgCData(oldp+238,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),4);
        bufp->chgCData(oldp+239,((0xffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                           >> 4U))),8);
        bufp->chgCData(oldp+240,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),4);
        bufp->chgCData(oldp+241,((0xffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                           >> 4U))),8);
        bufp->chgCData(oldp+242,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),4);
        bufp->chgCData(oldp+243,((0xffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                           >> 4U))),8);
        bufp->chgCData(oldp+244,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer))),4);
        bufp->chgBit(oldp+245,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_forward_en));
        bufp->chgBit(oldp+246,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_forward_en));
        bufp->chgBit(oldp+247,(((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs1_forward_en)) 
                                & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer1) 
                                   & (IData)((0U != 
                                              (6U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer)))))));
        bufp->chgBit(oldp+248,(((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_forward_en)) 
                                & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2) 
                                   & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__uop_buffer))));
        bufp->chgBit(oldp+249,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                      >> 0x10U))));
        bufp->chgBit(oldp+250,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                      >> 0xfU))));
        bufp->chgBit(oldp+251,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                      >> 0xeU))));
        bufp->chgCData(oldp+252,((7U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                        >> 0xbU))),3);
        bufp->chgBit(oldp+253,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                      >> 0xaU))));
        bufp->chgBit(oldp+254,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                      >> 9U))));
        bufp->chgBit(oldp+255,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                      >> 8U))));
        bufp->chgBit(oldp+256,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                      >> 7U))));
        bufp->chgBit(oldp+257,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                      >> 6U))));
        bufp->chgCData(oldp+258,((3U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                        >> 4U))),2);
        bufp->chgBit(oldp+259,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                      >> 3U))));
        bufp->chgBit(oldp+260,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                      >> 2U))));
        bufp->chgBit(oldp+261,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop 
                                      >> 1U))));
        bufp->chgBit(oldp+262,((1U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__uop)));
        bufp->chgBit(oldp+263,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__inst_fence));
        bufp->chgBit(oldp+264,(((0U == (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__state)) 
                                & ((~ ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1) 
                                       | (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2))) 
                                   & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__writeback_en)) 
                                      & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1_valid)) 
                                         & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_empty) 
                                            & ((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_read_ack)) 
                                               & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__mem_idle)))))))));
        bufp->chgBit(oldp+265,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__ifence_inval));
        bufp->chgSData(oldp+266,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+267,((0x7fffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+268,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+269,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+270,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+271,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1))),4);
        bufp->chgBit(oldp+272,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__stage1_valid));
        bufp->chgCData(oldp+273,(((0U == ((2U & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                                 >> 3U)) 
                                          | (1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_data))))
                                   ? 2U : ((1U == (
                                                   (2U 
                                                    & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__DecodeStage__DOT__instruction_buffer) 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__IssueStage__DOT__rs2_data))))
                                            ? 1U : 3U))),2);
        bufp->chgSData(oldp+274,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [0U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+275,((0x7fffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [0U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+276,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [0U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+277,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [0U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+278,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [0U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+279,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                 [0U]))),4);
        bufp->chgSData(oldp+280,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [1U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+281,((0x7fffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [1U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+282,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [1U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+283,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [1U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+284,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [1U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+285,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                 [1U]))),4);
        bufp->chgSData(oldp+286,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [2U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+287,((0x7fffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [2U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+288,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [2U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+289,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [2U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+290,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [2U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+291,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                 [2U]))),4);
        bufp->chgSData(oldp+292,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [3U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+293,((0x7fffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [3U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+294,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [3U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+295,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [3U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+296,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [3U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+297,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                 [3U]))),4);
        bufp->chgSData(oldp+298,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [4U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+299,((0x7fffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [4U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+300,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [4U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+301,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [4U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+302,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [4U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+303,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                 [4U]))),4);
        bufp->chgSData(oldp+304,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [5U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+305,((0x7fffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [5U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+306,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [5U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+307,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [5U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+308,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [5U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+309,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                 [5U]))),4);
        bufp->chgSData(oldp+310,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [6U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+311,((0x7fffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [6U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+312,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [6U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+313,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [6U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+314,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [6U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+315,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                 [6U]))),4);
        bufp->chgSData(oldp+316,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [7U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+317,((0x7fffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                     [7U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+318,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [7U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+319,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [7U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+320,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                [7U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+321,((0xfU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq
                                                 [7U]))),4);
        bufp->chgCData(oldp+322,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_head_ptr),4);
        bufp->chgCData(oldp+323,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_tail_ptr),4);
        bufp->chgBit(oldp+324,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__LSU__DOT__lsq_empty));
        bufp->chgSData(oldp+325,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+326,((0xffffU & (IData)(
                                                    (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 
                                                     >> 9U)))),16);
        bufp->chgBit(oldp+327,((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 
                                              >> 8U)))));
        bufp->chgBit(oldp+328,((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 
                                              >> 7U)))));
        bufp->chgCData(oldp+329,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 
                                                >> 5U)))),2);
        bufp->chgCData(oldp+330,((0xfU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1 
                                                  >> 1U)))),4);
        bufp->chgBit(oldp+331,((1U & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage1))));
        bufp->chgIData(oldp+332,((IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                          >> 9U))),32);
        bufp->chgBit(oldp+333,((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                              >> 8U)))));
        bufp->chgBit(oldp+334,((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                              >> 7U)))));
        bufp->chgCData(oldp+335,((3U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                                >> 5U)))),2);
        bufp->chgBit(oldp+336,((1U & (((0U != (3U & (IData)(
                                                            (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                                             >> 5U)))) 
                                       & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2 
                                                  >> 7U))) 
                                      ^ (IData)((0xc0ULL 
                                                 == 
                                                 (0xc0ULL 
                                                  & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__stage2)))))));
        bufp->chgIData(oldp+337,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Multiplier__DOT__adjusted_result),32);
        bufp->chgSData(oldp+338,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu
                                 .__PVT__data),16);
        bufp->chgCData(oldp+339,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu
                                 .__PVT__dest),4);
        bufp->chgBit(oldp+340,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__alu
                               .__PVT__valid));
        bufp->chgSData(oldp+341,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul
                                 .__PVT__data),16);
        bufp->chgCData(oldp+342,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul
                                 .__PVT__dest),4);
        bufp->chgBit(oldp+343,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__mul
                               .__PVT__valid));
        bufp->chgSData(oldp+344,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                                 .__PVT__data),16);
        bufp->chgCData(oldp+345,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                                 .__PVT__dest),4);
        bufp->chgBit(oldp+346,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__div
                               .__PVT__valid));
        bufp->chgSData(oldp+347,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                                 .__PVT__data),16);
        bufp->chgCData(oldp+348,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                                 .__PVT__dest),4);
        bufp->chgBit(oldp+349,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__lsu
                               .__PVT__valid));
        bufp->chgCData(oldp+350,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__selector),2);
    }
    bufp->chgBit(oldp+351,(vlSelfRef.clk));
    bufp->chgBit(oldp+352,(vlSelfRef.clk_en));
    bufp->chgBit(oldp+353,(vlSelfRef.sync_rst));
    bufp->chgSData(oldp+354,(((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__sync_rst)
                               ? 0U : (0x7fffU & ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__write_en)
                                                   ? (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__data_in)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__FetchStage__DOT__pc)))))),15);
    bufp->chgSData(oldp+355,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__ALU__data_out),16);
    bufp->chgSData(oldp+356,((0xffffU & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub 
                                         >> 3U))),16);
    bufp->chgBit(oldp+357,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub 
                                  >> 2U))));
    bufp->chgBit(oldp+358,((1U & (vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub 
                                  >> 1U))));
    bufp->chgBit(oldp+359,((1U & vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__add_sub)));
    bufp->chgSData(oldp+360,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__selected_ihb),16);
    bufp->chgSData(oldp+361,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip 
                                                 >> 0x30U)))),16);
    bufp->chgSData(oldp+362,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip 
                                                 >> 0x20U)))),16);
    bufp->chgSData(oldp+363,((0xffffU & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip 
                                                 >> 0x10U)))),16);
    bufp->chgSData(oldp+364,((0xffffU & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__bit_manip))),16);
    bufp->chgSData(oldp+365,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__ALU__DOT__int_selected_result0),16);
    bufp->chgBit(oldp+366,((1U & ((1U & (IData)((vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellout__IssueStage__alu_out 
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
    bufp->chgBit(oldp+367,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__FetchStage__sync_rst));
    bufp->chgBit(oldp+368,(((~ ((IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__Divider__DOT__temp_valid_flag) 
                                & (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT__WritebackStage__DOT__wb_conflict))) 
                            & (IData)(vlSelfRef.clk_en))));
    bufp->chgBit(oldp+369,(((~ (IData)(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__DecodeStage__hazard_stall)) 
                            & (IData)(vlSelfRef.clk_en))));
    bufp->chgBit(oldp+370,(vlSelfRef.Core_tb_m1__DOT__Core_m1_instance__DOT____Vcellinp__Multiplier__clk_en));
}

void VCore_tb_m1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb_m1___024root__trace_cleanup\n"); );
    // Init
    VCore_tb_m1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore_tb_m1___024root*>(voidSelf);
    VCore_tb_m1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
