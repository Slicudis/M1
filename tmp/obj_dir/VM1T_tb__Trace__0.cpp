// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VM1T_tb__Syms.h"


void VM1T_tb___024root__trace_chg_0_sub_0(VM1T_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VM1T_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root__trace_chg_0\n"); );
    // Init
    VM1T_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VM1T_tb___024root*>(voidSelf);
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VM1T_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VM1T_tb___024root__trace_chg_0_sub_0(VM1T_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [6U]))) {
        bufp->chgSData(oldp+0,((0xffffU & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[2U])),16);
        bufp->chgSData(oldp+1,((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U] 
                                >> 0x10U)),16);
        bufp->chgSData(oldp+2,((0xffffU & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[1U])),16);
        bufp->chgSData(oldp+3,((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U] 
                                >> 0x10U)),16);
        bufp->chgSData(oldp+4,((0xffffU & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bscan[0U])),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U] 
                     | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgSData(oldp+5,((0xffffU & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
                                           >> 1U))),16);
        bufp->chgIData(oldp+6,((0x1ffffU & ((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[2U] 
                                             << 0x10U) 
                                            | (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U] 
                                               >> 0x10U)))),17);
        bufp->chgSData(oldp+7,((0xffffU & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[1U])),16);
        bufp->chgSData(oldp+8,((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U] 
                                >> 0x10U)),16);
        bufp->chgSData(oldp+9,((0xffffU & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__shifter[0U])),16);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [3U] | vlSelfRef.__Vm_traceActivity
                       [4U]) | vlSelfRef.__Vm_traceActivity
                      [8U]) | vlSelfRef.__Vm_traceActivity
                     [9U]))) {
        bufp->chgCData(oldp+10,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[0]),5);
        bufp->chgCData(oldp+11,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[1]),5);
        bufp->chgCData(oldp+12,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[2]),5);
        bufp->chgCData(oldp+13,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[3]),5);
        bufp->chgCData(oldp+14,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[4]),5);
        bufp->chgCData(oldp+15,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[5]),5);
        bufp->chgCData(oldp+16,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[6]),5);
        bufp->chgCData(oldp+17,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[7]),5);
        bufp->chgCData(oldp+18,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[8]),5);
        bufp->chgCData(oldp+19,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[9]),5);
        bufp->chgCData(oldp+20,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[10]),5);
        bufp->chgCData(oldp+21,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[11]),5);
        bufp->chgCData(oldp+22,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[12]),5);
        bufp->chgCData(oldp+23,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[13]),5);
        bufp->chgCData(oldp+24,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[14]),5);
        bufp->chgCData(oldp+25,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bitscan_vals[15]),5);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgSData(oldp+26,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpo_reg),16);
        bufp->chgBit(oldp+27,(vlSelfRef.M1T_tb__DOT__rst_buffer));
        bufp->chgSData(oldp+28,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer),16);
        bufp->chgBit(oldp+29,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer0));
        bufp->chgBit(oldp+30,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__rst_buffer1));
        bufp->chgBit(oldp+31,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__sync_rst));
        bufp->chgBit(oldp+32,((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__DecodeStage__hazard_stall)))));
        bufp->chgSData(oldp+33,(((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst)
                                  ? 0U : (0x7fffU & 
                                          ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en)
                                            ? (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__data_in)
                                            : ((IData)(1U) 
                                               + (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc)))))),15);
        bufp->chgSData(oldp+34,((0x7fffU & (IData)(
                                                   (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                                    >> 0xaU)))),15);
        bufp->chgCData(oldp+35,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                               >> 8U)))),2);
        bufp->chgCData(oldp+36,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                               >> 6U)))),2);
        bufp->chgSData(oldp+37,((0xffffU & (IData)(
                                                   (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                                    >> 0x19U)))),16);
        bufp->chgCData(oldp+38,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer 
                                               >> 4U)))),2);
        bufp->chgBit(oldp+39,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer_valid));
        bufp->chgCData(oldp+40,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_buffer))),4);
        bufp->chgBit(oldp+41,((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict)))));
        bufp->chgSData(oldp+42,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__adjusted_data),16);
        bufp->chgCData(oldp+43,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__wb_dest_buffer),4);
        bufp->chgBit(oldp+44,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__mem_read_ack));
        bufp->chgBit(oldp+45,((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer)))));
        bufp->chgSData(oldp+46,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__FetchStage__DOT__pc),15);
        bufp->chgSData(oldp+47,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__adjusted_instruction_in),16);
        bufp->chgSData(oldp+48,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer),12);
        bufp->chgBit(oldp+49,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 0x10U))));
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 0xfU))));
        bufp->chgBit(oldp+51,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 0xeU))));
        bufp->chgCData(oldp+52,((7U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                       >> 0xbU))),3);
        bufp->chgBit(oldp+53,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 0xaU))));
        bufp->chgBit(oldp+54,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 9U))));
        bufp->chgBit(oldp+55,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 8U))));
        bufp->chgBit(oldp+56,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 7U))));
        bufp->chgBit(oldp+57,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 6U))));
        bufp->chgCData(oldp+58,((3U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                       >> 4U))),2);
        bufp->chgBit(oldp+59,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 3U))));
        bufp->chgBit(oldp+60,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 2U))));
        bufp->chgBit(oldp+61,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                     >> 1U))));
        bufp->chgBit(oldp+62,((1U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer)));
        bufp->chgSData(oldp+63,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__pc_buffer),15);
        bufp->chgSData(oldp+64,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__jmp_tgt_buffer),15);
        bufp->chgSData(oldp+65,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__inc_pc_buffer),15);
        bufp->chgSData(oldp+66,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__rs1_buffer),16);
        bufp->chgSData(oldp+67,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__rs2_buffer),16);
        bufp->chgBit(oldp+68,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer1));
        bufp->chgBit(oldp+69,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2));
        bufp->chgBit(oldp+70,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve));
        bufp->chgCData(oldp+71,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),4);
        bufp->chgBit(oldp+72,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_en));
        bufp->chgSData(oldp+73,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__jmp_target_out),15);
        bufp->chgBit(oldp+74,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__pipeline_stall));
        bufp->chgBit(oldp+75,((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                             >> 0x29U)))));
        bufp->chgCData(oldp+76,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 0x25U)))),4);
        bufp->chgSData(oldp+77,((0xffffU & (IData)(
                                                   (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                    >> 0x15U)))),16);
        bufp->chgSData(oldp+78,((0xffffU & (IData)(
                                                   (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                    >> 5U)))),16);
        bufp->chgCData(oldp+79,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 1U)))),4);
        bufp->chgBit(oldp+80,((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out))));
        bufp->chgBit(oldp+81,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Multiplier__call));
        bufp->chgCData(oldp+82,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_5 
                                               >> 0x24U)))),2);
        bufp->chgCData(oldp+83,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_5 
                                                 >> 0x20U)))),4);
        bufp->chgSData(oldp+84,((0xffffU & (IData)(
                                                   (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_5 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+85,((0xffffU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT____VdfgRegularize_h1d250f7d_0_5))),16);
        bufp->chgBit(oldp+86,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Divider__call));
        bufp->chgBit(oldp+87,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__call));
        bufp->chgSData(oldp+88,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_data),16);
        bufp->chgSData(oldp+89,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data),16);
        bufp->chgCData(oldp+90,((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                         >> 4U))),4);
        bufp->chgBit(oldp+91,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__LSU__fence_mode));
        bufp->chgCData(oldp+92,((3U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),2);
        bufp->chgBit(oldp+93,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__call));
        bufp->chgCData(oldp+94,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__BranchUnit__operation),2);
        bufp->chgCData(oldp+95,((0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                          >> 4U))),8);
        bufp->chgCData(oldp+96,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                 >> 0x25U)))),4);
        bufp->chgBit(oldp+97,((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                             >> 0x29U)))));
        bufp->chgSData(oldp+98,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Multiplier__data_out),16);
        bufp->chgCData(oldp+99,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                                 >> 1U)))),4);
        bufp->chgBit(oldp+100,((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2))));
        bufp->chgBit(oldp+101,((1U & (~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1) 
                                         | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2))))));
        bufp->chgSData(oldp+102,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__Divider__data_out),16);
        bufp->chgCData(oldp+103,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__dest_addr_buffer),4);
        bufp->chgBit(oldp+104,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_valid_flag));
        bufp->chgBit(oldp+105,((0U != (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state))));
        bufp->chgBit(oldp+106,(((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1_valid)) 
                                & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty) 
                                   & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__mem_read_ack)) 
                                      & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer)))))));
        bufp->chgBit(oldp+107,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__lsu_full));
        bufp->chgBit(oldp+108,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_flush));
        bufp->chgBit(oldp+109,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_issue_inval));
        bufp->chgSData(oldp+110,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_pc_tgt),15);
        bufp->chgBit(oldp+111,((1U & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en)))));
        bufp->chgBit(oldp+112,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict));
        bufp->chgSData(oldp+113,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_data),16);
        bufp->chgCData(oldp+114,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selected_dest),4);
        bufp->chgBit(oldp+115,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en));
        bufp->chgBit(oldp+116,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__reset_buffer));
        bufp->chgCData(oldp+117,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                  >> 1U)))),4);
        bufp->chgBit(oldp+118,((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out))));
        bufp->chgSData(oldp+119,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                     >> 0x15U)))),16);
        bufp->chgSData(oldp+120,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                     >> 5U)))),16);
        bufp->chgSData(oldp+121,((0xffffU & ((IData)(
                                                     (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                      >> 0x15U)) 
                                             & (IData)(
                                                       (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                        >> 5U))))),16);
        bufp->chgSData(oldp+122,((0xffffU & ((IData)(
                                                     (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                      >> 0x15U)) 
                                             | (IData)(
                                                       (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                        >> 5U))))),16);
        bufp->chgSData(oldp+123,((0xffffU & ((IData)(
                                                     (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                      >> 0x15U)) 
                                             ^ (IData)(
                                                       (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                        >> 5U))))),16);
        bufp->chgIData(oldp+124,(((((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                             >> 0x15U)) 
                                    << 0x10U) | (0xffffU 
                                                 & (IData)(
                                                           (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                            >> 0x15U)))) 
                                  >> (0xfU & (IData)(
                                                     (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                      >> 5U))))),32);
        bufp->chgIData(oldp+125,(((((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                             >> 0x15U)) 
                                    << 0x10U) | (0xffffU 
                                                 & (IData)(
                                                           (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                            >> 0x15U)))) 
                                  << (0xfU & (IData)(
                                                     (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
                                                      >> 5U))))),32);
        bufp->chgBit(oldp+126,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__sync_rst));
        bufp->chgBit(oldp+127,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__DecodeStage__hazard_stall));
        bufp->chgBit(oldp+128,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__write_en));
        bufp->chgBit(oldp+129,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 0x10U))));
        bufp->chgBit(oldp+130,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 0xfU))));
        bufp->chgBit(oldp+131,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 0xeU))));
        bufp->chgCData(oldp+132,((7U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                        >> 0xbU))),3);
        bufp->chgBit(oldp+133,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 0xaU))));
        bufp->chgBit(oldp+134,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 9U))));
        bufp->chgBit(oldp+135,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 8U))));
        bufp->chgBit(oldp+136,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 7U))));
        bufp->chgBit(oldp+137,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 6U))));
        bufp->chgCData(oldp+138,((3U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                        >> 4U))),2);
        bufp->chgBit(oldp+139,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 3U))));
        bufp->chgBit(oldp+140,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 2U))));
        bufp->chgBit(oldp+141,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer 
                                      >> 1U))));
        bufp->chgBit(oldp+142,((1U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer)));
        bufp->chgCData(oldp+143,((0x7fU & ((0x800U 
                                            & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer))
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
        bufp->chgBit(oldp+144,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 0x10U))));
        bufp->chgBit(oldp+145,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 0xfU))));
        bufp->chgBit(oldp+146,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 0xeU))));
        bufp->chgCData(oldp+147,((7U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                        >> 0xbU))),3);
        bufp->chgBit(oldp+148,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 0xaU))));
        bufp->chgBit(oldp+149,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 9U))));
        bufp->chgBit(oldp+150,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 8U))));
        bufp->chgBit(oldp+151,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 7U))));
        bufp->chgBit(oldp+152,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 6U))));
        bufp->chgCData(oldp+153,((3U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                        >> 4U))),2);
        bufp->chgBit(oldp+154,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 3U))));
        bufp->chgBit(oldp+155,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 2U))));
        bufp->chgBit(oldp+156,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop 
                                      >> 1U))));
        bufp->chgBit(oldp+157,((1U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__decoded_uop)));
        bufp->chgCData(oldp+158,((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                          >> 8U))),4);
        bufp->chgCData(oldp+159,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer))),4);
        bufp->chgCData(oldp+160,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop),8);
        bufp->chgBit(oldp+161,((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop))));
        bufp->chgCData(oldp+162,((7U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                        >> 1U))),3);
        bufp->chgBit(oldp+163,((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                      >> 4U))));
        bufp->chgBit(oldp+164,((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                      >> 5U))));
        bufp->chgBit(oldp+165,((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                      >> 6U))));
        bufp->chgBit(oldp+166,((1U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__InstructionDecoder__DOT__compressed_uop) 
                                      >> 7U))));
        bufp->chgCData(oldp+167,((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+168,((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__irom_buffer) 
                                          >> 4U))),4);
        bufp->chgSData(oldp+169,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[0]),16);
        bufp->chgSData(oldp+170,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[1]),16);
        bufp->chgSData(oldp+171,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[2]),16);
        bufp->chgSData(oldp+172,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[3]),16);
        bufp->chgSData(oldp+173,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[4]),16);
        bufp->chgSData(oldp+174,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[5]),16);
        bufp->chgSData(oldp+175,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[6]),16);
        bufp->chgSData(oldp+176,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[7]),16);
        bufp->chgSData(oldp+177,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[8]),16);
        bufp->chgSData(oldp+178,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[9]),16);
        bufp->chgSData(oldp+179,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[10]),16);
        bufp->chgSData(oldp+180,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[11]),16);
        bufp->chgSData(oldp+181,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[12]),16);
        bufp->chgSData(oldp+182,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[13]),16);
        bufp->chgSData(oldp+183,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile[14]),16);
        bufp->chgBit(oldp+184,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[0]));
        bufp->chgBit(oldp+185,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[1]));
        bufp->chgBit(oldp+186,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[2]));
        bufp->chgBit(oldp+187,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[3]));
        bufp->chgBit(oldp+188,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[4]));
        bufp->chgBit(oldp+189,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[5]));
        bufp->chgBit(oldp+190,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[6]));
        bufp->chgBit(oldp+191,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[7]));
        bufp->chgBit(oldp+192,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[8]));
        bufp->chgBit(oldp+193,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[9]));
        bufp->chgBit(oldp+194,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[10]));
        bufp->chgBit(oldp+195,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[11]));
        bufp->chgBit(oldp+196,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[12]));
        bufp->chgBit(oldp+197,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[13]));
        bufp->chgBit(oldp+198,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard[14]));
        bufp->chgSData(oldp+199,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__special_constant),16);
        bufp->chgSData(oldp+200,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[0]),16);
        bufp->chgSData(oldp+201,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[1]),16);
        bufp->chgSData(oldp+202,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[2]),16);
        bufp->chgSData(oldp+203,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[3]),16);
        bufp->chgSData(oldp+204,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[4]),16);
        bufp->chgSData(oldp+205,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[5]),16);
        bufp->chgSData(oldp+206,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[6]),16);
        bufp->chgSData(oldp+207,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[7]),16);
        bufp->chgSData(oldp+208,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[8]),16);
        bufp->chgSData(oldp+209,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[9]),16);
        bufp->chgSData(oldp+210,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[10]),16);
        bufp->chgSData(oldp+211,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[11]),16);
        bufp->chgSData(oldp+212,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[12]),16);
        bufp->chgSData(oldp+213,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[13]),16);
        bufp->chgSData(oldp+214,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[14]),16);
        bufp->chgSData(oldp+215,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__regfile_read[15]),16);
        bufp->chgSData(oldp+216,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_read),16);
        bufp->chgBit(oldp+217,((1U & (~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__temp_valid_flag) 
                                         & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__wb_conflict))))));
        bufp->chgCData(oldp+218,((3U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                        >> 4U))),2);
        bufp->chgSData(oldp+219,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in1_buffer),16);
        bufp->chgSData(oldp+220,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer),16);
        bufp->chgCData(oldp+221,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer),2);
        bufp->chgBit(oldp+222,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data1_sign));
        bufp->chgBit(oldp+223,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__preserved_data2_sign));
        bufp->chgSData(oldp+224,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__cond_abs_data1),16);
        bufp->chgSData(oldp+225,((0xffffU & (((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__operation_buffer)) 
                                              & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer) 
                                                 >> 0xfU))
                                              ? (- (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer))
                                              : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__data_in2_buffer)))),16);
        bufp->chgIData(oldp+226,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg),17);
        bufp->chgSData(oldp+227,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg),16);
        bufp->chgCData(oldp+228,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__i_ctr),3);
        bufp->chgIData(oldp+229,(((0x8000U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a)
                                   ? vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage1_a
                                   : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a)),17);
        bufp->chgSData(oldp+230,(((0xfffeU & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg), 1U)) 
                                  | (1U & (~ (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                              >> 0x10U))))),16);
        bufp->chgIData(oldp+231,(((0x8000U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a)
                                   ? vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage1_a
                                   : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a)),17);
        bufp->chgSData(oldp+232,(((0xfffeU & VL_SHIFTL_III(32,16,32, 
                                                           ((0xfffeU 
                                                             & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg), 1U)) 
                                                            | (1U 
                                                               & (~ 
                                                                  (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                                                   >> 0x10U)))), 1U)) 
                                  | (1U & (~ (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a 
                                              >> 0x10U))))),16);
        bufp->chgCData(oldp+233,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state),2);
        bufp->chgBit(oldp+234,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results));
        bufp->chgSData(oldp+235,((0xffffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results)
                                              ? (- (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg))
                                              : (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg)))),16);
        bufp->chgSData(oldp+236,((0xffffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__negate_results)
                                              ? (- vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg)
                                              : vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__a_reg))),16);
        bufp->chgIData(oldp+237,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage1_a),17);
        bufp->chgSData(oldp+238,((0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg), 1U))),16);
        bufp->chgIData(oldp+239,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a),17);
        bufp->chgIData(oldp+240,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage1_a),17);
        bufp->chgSData(oldp+241,((0xffffU & VL_SHIFTL_III(16,16,32, 
                                                          ((0xfffeU 
                                                            & VL_SHIFTL_III(32,16,32, (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__q_reg), 1U)) 
                                                           | (1U 
                                                              & (~ 
                                                                 (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration1__DOT__stage2_a 
                                                                  >> 0x10U)))), 1U))),16);
        bufp->chgIData(oldp+242,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__iteration2__DOT__stage2_a),17);
        bufp->chgSData(oldp+243,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__FetchStage__data_in),15);
        bufp->chgBit(oldp+244,(((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_flush) 
                                | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__brh_issue_inval))));
        bufp->chgCData(oldp+245,((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                          >> 8U))),4);
        bufp->chgCData(oldp+246,((0xfU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+247,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),4);
        bufp->chgCData(oldp+248,((0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                           >> 4U))),8);
        bufp->chgCData(oldp+249,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),4);
        bufp->chgCData(oldp+250,((0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                           >> 4U))),8);
        bufp->chgCData(oldp+251,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),4);
        bufp->chgCData(oldp+252,((0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                           >> 4U))),8);
        bufp->chgCData(oldp+253,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),4);
        bufp->chgCData(oldp+254,((0xffU & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                           >> 4U))),8);
        bufp->chgCData(oldp+255,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer))),4);
        bufp->chgBit(oldp+256,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_forward_en));
        bufp->chgBit(oldp+257,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_forward_en));
        bufp->chgBit(oldp+258,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_busy));
        bufp->chgBit(oldp+259,(((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_forward_en)) 
                                & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2) 
                                   & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer))));
        bufp->chgBit(oldp+260,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                      >> 0x10U))));
        bufp->chgBit(oldp+261,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                      >> 0xfU))));
        bufp->chgBit(oldp+262,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                      >> 0xeU))));
        bufp->chgCData(oldp+263,((7U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                        >> 0xbU))),3);
        bufp->chgBit(oldp+264,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                      >> 0xaU))));
        bufp->chgBit(oldp+265,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                      >> 9U))));
        bufp->chgBit(oldp+266,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                      >> 8U))));
        bufp->chgBit(oldp+267,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                      >> 7U))));
        bufp->chgBit(oldp+268,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                      >> 6U))));
        bufp->chgCData(oldp+269,((3U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                        >> 4U))),2);
        bufp->chgBit(oldp+270,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                      >> 3U))));
        bufp->chgBit(oldp+271,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                      >> 2U))));
        bufp->chgBit(oldp+272,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop 
                                      >> 1U))));
        bufp->chgBit(oldp+273,((1U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__uop)));
        bufp->chgBit(oldp+274,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__inst_fence));
        bufp->chgBit(oldp+275,(((0U == (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Divider__DOT__state)) 
                                & ((~ ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1) 
                                       | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2))) 
                                   & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__writeback_en)) 
                                      & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1_valid)) 
                                         & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty) 
                                            & ((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__mem_read_ack)) 
                                               & (~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer))))))))));
        bufp->chgBit(oldp+276,(((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_busy) 
                                | (((~ (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_forward_en)) 
                                    & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__RegisterFile__DOT__scoreboard_buffer2) 
                                       & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__uop_buffer)) 
                                   | ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs1_busy) 
                                      & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__regfile_reserve))))));
        bufp->chgBit(oldp+277,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__ifence_inval));
        bufp->chgSData(oldp+278,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+279,((0x7fffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+280,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+281,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+282,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+283,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1))),4);
        bufp->chgBit(oldp+284,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__stage1_valid));
        bufp->chgCData(oldp+285,(((0U == ((2U & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                 >> 3U)) 
                                          | (1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data))))
                                   ? 2U : ((1U == (
                                                   (2U 
                                                    & ((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__DecodeStage__DOT__instruction_buffer) 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__IssueStage__DOT__rs2_data))))
                                            ? 1U : 3U))),2);
        bufp->chgSData(oldp+286,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [0U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+287,((0x7fffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [0U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+288,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [0U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+289,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [0U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+290,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [0U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+291,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                 [0U]))),4);
        bufp->chgSData(oldp+292,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [1U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+293,((0x7fffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [1U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+294,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [1U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+295,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [1U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+296,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [1U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+297,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                 [1U]))),4);
        bufp->chgSData(oldp+298,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [2U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+299,((0x7fffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [2U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+300,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [2U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+301,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [2U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+302,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [2U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+303,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                 [2U]))),4);
        bufp->chgSData(oldp+304,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [3U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+305,((0x7fffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [3U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+306,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [3U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+307,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [3U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+308,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [3U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+309,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                 [3U]))),4);
        bufp->chgSData(oldp+310,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [4U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+311,((0x7fffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [4U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+312,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [4U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+313,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [4U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+314,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [4U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+315,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                 [4U]))),4);
        bufp->chgSData(oldp+316,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [5U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+317,((0x7fffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [5U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+318,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [5U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+319,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [5U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+320,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [5U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+321,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                 [5U]))),4);
        bufp->chgSData(oldp+322,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [6U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+323,((0x7fffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [6U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+324,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [6U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+325,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [6U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+326,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [6U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+327,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                 [6U]))),4);
        bufp->chgSData(oldp+328,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [7U] 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+329,((0x7fffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                     [7U] 
                                                     >> 0xaU)))),15);
        bufp->chgCData(oldp+330,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [7U] 
                                                >> 8U)))),2);
        bufp->chgCData(oldp+331,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [7U] 
                                                >> 6U)))),2);
        bufp->chgCData(oldp+332,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                [7U] 
                                                >> 4U)))),2);
        bufp->chgCData(oldp+333,((0xfU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq
                                                 [7U]))),4);
        bufp->chgCData(oldp+334,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_head_ptr),4);
        bufp->chgCData(oldp+335,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_tail_ptr),4);
        bufp->chgBit(oldp+336,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__LSU__DOT__lsq_empty));
        bufp->chgBit(oldp+337,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellinp__Multiplier__clk_en));
        bufp->chgSData(oldp+338,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                                     >> 0x19U)))),16);
        bufp->chgSData(oldp+339,((0xffffU & (IData)(
                                                    (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                                     >> 9U)))),16);
        bufp->chgBit(oldp+340,((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                              >> 8U)))));
        bufp->chgBit(oldp+341,((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                              >> 7U)))));
        bufp->chgCData(oldp+342,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                                >> 5U)))),2);
        bufp->chgCData(oldp+343,((0xfU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1 
                                                  >> 1U)))),4);
        bufp->chgBit(oldp+344,((1U & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage1))));
        bufp->chgIData(oldp+345,((IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                          >> 9U))),32);
        bufp->chgBit(oldp+346,((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                              >> 8U)))));
        bufp->chgBit(oldp+347,((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                              >> 7U)))));
        bufp->chgCData(oldp+348,((3U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                                >> 5U)))),2);
        bufp->chgBit(oldp+349,((1U & (((0U != (3U & (IData)(
                                                            (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                                             >> 5U)))) 
                                       & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2 
                                                  >> 7U))) 
                                      ^ (IData)((0xc0ULL 
                                                 == 
                                                 (0xc0ULL 
                                                  & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__stage2)))))));
        bufp->chgIData(oldp+350,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__Multiplier__DOT__adjusted_result),32);
        bufp->chgSData(oldp+351,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
                                 .__PVT__data),16);
        bufp->chgCData(oldp+352,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
                                 .__PVT__dest),4);
        bufp->chgBit(oldp+353,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__alu
                               .__PVT__valid));
        bufp->chgSData(oldp+354,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
                                 .__PVT__data),16);
        bufp->chgCData(oldp+355,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
                                 .__PVT__dest),4);
        bufp->chgBit(oldp+356,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__mul
                               .__PVT__valid));
        bufp->chgSData(oldp+357,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                                 .__PVT__data),16);
        bufp->chgCData(oldp+358,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                                 .__PVT__dest),4);
        bufp->chgBit(oldp+359,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__div
                               .__PVT__valid));
        bufp->chgSData(oldp+360,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                                 .__PVT__data),16);
        bufp->chgCData(oldp+361,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                                 .__PVT__dest),4);
        bufp->chgBit(oldp+362,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__lsu
                               .__PVT__valid));
        bufp->chgCData(oldp+363,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__WritebackStage__DOT__selector),2);
        bufp->chgBit(oldp+364,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT____Vcellinp__MemoryController__core_mem_enable));
        bufp->chgCData(oldp+365,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer0),8);
        bufp->chgCData(oldp+366,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer1),8);
        bufp->chgSData(oldp+367,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__gpi_buffer),16);
        bufp->chgCData(oldp+368,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__dtype_buffer),2);
        bufp->chgBit(oldp+369,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__en_buffer));
        bufp->chgBit(oldp+370,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__mode_buffer));
        bufp->chgBit(oldp+371,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__sel_buffer));
        bufp->chgSData(oldp+372,(((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__sel_buffer)
                                   ? 0U : (((IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer0) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__MemoryController__DOT__ram_buffer1)))),16);
    }
    bufp->chgBit(oldp+373,(vlSelfRef.clk));
    bufp->chgBit(oldp+374,(vlSelfRef.clk_en));
    bufp->chgBit(oldp+375,(vlSelfRef.sync_rst));
    bufp->chgBit(oldp+376,(((IData)(vlSelfRef.M1T_tb__DOT__rst_buffer) 
                            | (IData)(vlSelfRef.sync_rst))));
    bufp->chgSData(oldp+377,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__ALU__data_out),16);
    bufp->chgSData(oldp+378,((0xffffU & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                         >> 3U))),16);
    bufp->chgBit(oldp+379,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                  >> 2U))));
    bufp->chgBit(oldp+380,((1U & (vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub 
                                  >> 1U))));
    bufp->chgBit(oldp+381,((1U & vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__add_sub)));
    bufp->chgSData(oldp+382,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__selected_ihb),16);
    bufp->chgSData(oldp+383,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                                 >> 0x30U)))),16);
    bufp->chgSData(oldp+384,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                                 >> 0x20U)))),16);
    bufp->chgSData(oldp+385,((0xffffU & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip 
                                                 >> 0x10U)))),16);
    bufp->chgSData(oldp+386,((0xffffU & (IData)(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__bit_manip))),16);
    bufp->chgSData(oldp+387,(vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT__ALU__DOT__int_selected_result0),16);
    bufp->chgBit(oldp+388,((1U & ((1U & (IData)((vlSelfRef.M1T_tb__DOT__Toplevel_m1t_instance__DOT__Core__DOT____Vcellout__IssueStage__alu_out 
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

void VM1T_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VM1T_tb___024root__trace_cleanup\n"); );
    // Init
    VM1T_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VM1T_tb___024root*>(voidSelf);
    VM1T_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
