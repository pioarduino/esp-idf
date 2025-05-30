/**
 * SPDX-FileCopyrightText: 2024-2025 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/** Group: Interrupt Registers */
/** Type of in_int_raw_chn register
 *  Raw status interrupt of channel n.
 */
typedef union {
    struct {
        /** in_done_chn_int_raw : R/WTC/SS; bitpos: [0]; default: 0;
         *  The raw interrupt bit turns to high level when the last data pointed by one inlink
         *  descriptor has been received for Rx channel n.
         */
        uint32_t in_done_chn_int_raw:1;
        /** in_suc_eof_chn_int_raw : R/WTC/SS; bitpos: [1]; default: 0;
         *  The raw interrupt bit turns to high level when the last data pointed by one inlink
         *  descriptor has been received for Rx channel n. For UHCI0 the raw interrupt bit
         *  turns to high level when the last data pointed by one inlink descriptor has been
         *  received and no data error is detected for Rx channel n.
         */
        uint32_t in_suc_eof_chn_int_raw:1;
        /** in_err_eof_chn_int_raw : R/WTC/SS; bitpos: [2]; default: 0;
         *  The raw interrupt bit turns to high level when data error is detected only in the
         *  case that the peripheral is UHCI0 for Rx channel n. For other peripherals this raw
         *  interrupt is reserved.
         */
        uint32_t in_err_eof_chn_int_raw:1;
        /** in_dscr_err_chn_int_raw : R/WTC/SS; bitpos: [3]; default: 0;
         *  The raw interrupt bit turns to high level when detecting inlink descriptor error
         *  including owner error and the second and third word error of inlink descriptor for
         *  Rx channel n.
         */
        uint32_t in_dscr_err_chn_int_raw:1;
        /** in_dscr_empty_chn_int_raw : R/WTC/SS; bitpos: [4]; default: 0;
         *  The raw interrupt bit turns to high level when Rx buffer pointed by inlink is full
         *  and receiving data is not completed but there is no more inlink for Rx channel n.
         */
        uint32_t in_dscr_empty_chn_int_raw:1;
        /** infifo_ovf_chn_int_raw : R/WTC/SS; bitpos: [5]; default: 0;
         *  This raw interrupt bit turns to high level when level 1 fifo of Rx channel n is
         *  overflow.
         */
        uint32_t infifo_ovf_chn_int_raw:1;
        /** infifo_udf_chn_int_raw : R/WTC/SS; bitpos: [6]; default: 0;
         *  This raw interrupt bit turns to high level when level 1 fifo of Rx channel n is
         *  underflow.
         */
        uint32_t infifo_udf_chn_int_raw:1;
        uint32_t reserved_7:25;
    };
    uint32_t val;
} gdma_in_int_raw_chn_reg_t;

/** Type of in_int_st_chn register
 *  Masked interrupt of channel n.
 */
typedef union {
    struct {
        /** in_done_chn_int_st : RO; bitpos: [0]; default: 0;
         *  The raw interrupt status bit for the IN_DONE_CH_INT interrupt.
         */
        uint32_t in_done_chn_int_st:1;
        /** in_suc_eof_chn_int_st : RO; bitpos: [1]; default: 0;
         *  The raw interrupt status bit for the IN_SUC_EOF_CH_INT interrupt.
         */
        uint32_t in_suc_eof_chn_int_st:1;
        /** in_err_eof_chn_int_st : RO; bitpos: [2]; default: 0;
         *  The raw interrupt status bit for the IN_ERR_EOF_CH_INT interrupt.
         */
        uint32_t in_err_eof_chn_int_st:1;
        /** in_dscr_err_chn_int_st : RO; bitpos: [3]; default: 0;
         *  The raw interrupt status bit for the IN_DSCR_ERR_CH_INT interrupt.
         */
        uint32_t in_dscr_err_chn_int_st:1;
        /** in_dscr_empty_chn_int_st : RO; bitpos: [4]; default: 0;
         *  The raw interrupt status bit for the IN_DSCR_EMPTY_CH_INT interrupt.
         */
        uint32_t in_dscr_empty_chn_int_st:1;
        /** infifo_ovf_chn_int_st : RO; bitpos: [5]; default: 0;
         *  The raw interrupt status bit for the INFIFO_OVF_L1_CH_INT interrupt.
         */
        uint32_t infifo_ovf_chn_int_st:1;
        /** infifo_udf_chn_int_st : RO; bitpos: [6]; default: 0;
         *  The raw interrupt status bit for the INFIFO_UDF_L1_CH_INT interrupt.
         */
        uint32_t infifo_udf_chn_int_st:1;
        uint32_t reserved_7:25;
    };
    uint32_t val;
} gdma_in_int_st_chn_reg_t;

/** Type of in_int_ena_chn register
 *  Interrupt enable bits of channel n.
 */
typedef union {
    struct {
        /** in_done_chn_int_ena : R/W; bitpos: [0]; default: 0;
         *  The interrupt enable bit for the IN_DONE_CH_INT interrupt.
         */
        uint32_t in_done_chn_int_ena:1;
        /** in_suc_eof_chn_int_ena : R/W; bitpos: [1]; default: 0;
         *  The interrupt enable bit for the IN_SUC_EOF_CH_INT interrupt.
         */
        uint32_t in_suc_eof_chn_int_ena:1;
        /** in_err_eof_chn_int_ena : R/W; bitpos: [2]; default: 0;
         *  The interrupt enable bit for the IN_ERR_EOF_CH_INT interrupt.
         */
        uint32_t in_err_eof_chn_int_ena:1;
        /** in_dscr_err_chn_int_ena : R/W; bitpos: [3]; default: 0;
         *  The interrupt enable bit for the IN_DSCR_ERR_CH_INT interrupt.
         */
        uint32_t in_dscr_err_chn_int_ena:1;
        /** in_dscr_empty_chn_int_ena : R/W; bitpos: [4]; default: 0;
         *  The interrupt enable bit for the IN_DSCR_EMPTY_CH_INT interrupt.
         */
        uint32_t in_dscr_empty_chn_int_ena:1;
        /** infifo_ovf_chn_int_ena : R/W; bitpos: [5]; default: 0;
         *  The interrupt enable bit for the INFIFO_OVF_L1_CH_INT interrupt.
         */
        uint32_t infifo_ovf_chn_int_ena:1;
        /** infifo_udf_chn_int_ena : R/W; bitpos: [6]; default: 0;
         *  The interrupt enable bit for the INFIFO_UDF_L1_CH_INT interrupt.
         */
        uint32_t infifo_udf_chn_int_ena:1;
        uint32_t reserved_7:25;
    };
    uint32_t val;
} gdma_in_int_ena_chn_reg_t;

/** Type of in_int_clr_chn register
 *  Interrupt clear bits of channel n.
 */
typedef union {
    struct {
        /** in_done_chn_int_clr : WT; bitpos: [0]; default: 0;
         *  Set this bit to clear the IN_DONE_CH_INT interrupt.
         */
        uint32_t in_done_chn_int_clr:1;
        /** in_suc_eof_chn_int_clr : WT; bitpos: [1]; default: 0;
         *  Set this bit to clear the IN_SUC_EOF_CH_INT interrupt.
         */
        uint32_t in_suc_eof_chn_int_clr:1;
        /** in_err_eof_chn_int_clr : WT; bitpos: [2]; default: 0;
         *  Set this bit to clear the IN_ERR_EOF_CH_INT interrupt.
         */
        uint32_t in_err_eof_chn_int_clr:1;
        /** in_dscr_err_chn_int_clr : WT; bitpos: [3]; default: 0;
         *  Set this bit to clear the IN_DSCR_ERR_CH_INT interrupt.
         */
        uint32_t in_dscr_err_chn_int_clr:1;
        /** in_dscr_empty_chn_int_clr : WT; bitpos: [4]; default: 0;
         *  Set this bit to clear the IN_DSCR_EMPTY_CH_INT interrupt.
         */
        uint32_t in_dscr_empty_chn_int_clr:1;
        /** infifo_ovf_chn_int_clr : WT; bitpos: [5]; default: 0;
         *  Set this bit to clear the INFIFO_OVF_L1_CH_INT interrupt.
         */
        uint32_t infifo_ovf_chn_int_clr:1;
        /** infifo_udf_chn_int_clr : WT; bitpos: [6]; default: 0;
         *  Set this bit to clear the INFIFO_UDF_L1_CH_INT interrupt.
         */
        uint32_t infifo_udf_chn_int_clr:1;
        uint32_t reserved_7:25;
    };
    uint32_t val;
} gdma_in_int_clr_chn_reg_t;

/** Type of out_int_raw_chn register
 *  Raw status interrupt of channel n.
 */
typedef union {
    struct {
        /** out_done_chn_int_raw : R/WTC/SS; bitpos: [0]; default: 0;
         *  The raw interrupt bit turns to high level when the last data pointed by one outlink
         *  descriptor has been transmitted to peripherals for Tx channel n.
         */
        uint32_t out_done_chn_int_raw:1;
        /** out_eof_chn_int_raw : R/WTC/SS; bitpos: [1]; default: 0;
         *  The raw interrupt bit turns to high level when the last data pointed by one outlink
         *  descriptor has been read from memory for Tx channel n.
         */
        uint32_t out_eof_chn_int_raw:1;
        /** out_dscr_err_chn_int_raw : R/WTC/SS; bitpos: [2]; default: 0;
         *  The raw interrupt bit turns to high level when detecting outlink descriptor error
         *  including owner error and the second and third word error of outlink descriptor for
         *  Tx channel n.
         */
        uint32_t out_dscr_err_chn_int_raw:1;
        /** out_total_eof_chn_int_raw : R/WTC/SS; bitpos: [3]; default: 0;
         *  The raw interrupt bit turns to high level when data corresponding a outlink
         *  (includes one link descriptor or few link descriptors) is transmitted out for Tx
         *  channel n.
         */
        uint32_t out_total_eof_chn_int_raw:1;
        /** outfifo_ovf_chn_int_raw : R/WTC/SS; bitpos: [4]; default: 0;
         *  This raw interrupt bit turns to high level when level 1 fifo of Tx channel n is
         *  overflow.
         */
        uint32_t outfifo_ovf_chn_int_raw:1;
        /** outfifo_udf_chn_int_raw : R/WTC/SS; bitpos: [5]; default: 0;
         *  This raw interrupt bit turns to high level when level 1 fifo of Tx channel n is
         *  underflow.
         */
        uint32_t outfifo_udf_chn_int_raw:1;
        uint32_t reserved_6:26;
    };
    uint32_t val;
} gdma_out_int_raw_chn_reg_t;

/** Type of out_int_st_chn register
 *  Masked interrupt of channel n.
 */
typedef union {
    struct {
        /** out_done_chn_int_st : RO; bitpos: [0]; default: 0;
         *  The raw interrupt status bit for the OUT_DONE_CH_INT interrupt.
         */
        uint32_t out_done_chn_int_st:1;
        /** out_eof_chn_int_st : RO; bitpos: [1]; default: 0;
         *  The raw interrupt status bit for the OUT_EOF_CH_INT interrupt.
         */
        uint32_t out_eof_chn_int_st:1;
        /** out_dscr_err_chn_int_st : RO; bitpos: [2]; default: 0;
         *  The raw interrupt status bit for the OUT_DSCR_ERR_CH_INT interrupt.
         */
        uint32_t out_dscr_err_chn_int_st:1;
        /** out_total_eof_chn_int_st : RO; bitpos: [3]; default: 0;
         *  The raw interrupt status bit for the OUT_TOTAL_EOF_CH_INT interrupt.
         */
        uint32_t out_total_eof_chn_int_st:1;
        /** outfifo_ovf_chn_int_st : RO; bitpos: [4]; default: 0;
         *  The raw interrupt status bit for the OUTFIFO_OVF_L1_CH_INT interrupt.
         */
        uint32_t outfifo_ovf_chn_int_st:1;
        /** outfifo_udf_chn_int_st : RO; bitpos: [5]; default: 0;
         *  The raw interrupt status bit for the OUTFIFO_UDF_L1_CH_INT interrupt.
         */
        uint32_t outfifo_udf_chn_int_st:1;
        uint32_t reserved_6:26;
    };
    uint32_t val;
} gdma_out_int_st_chn_reg_t;

/** Type of out_int_ena_chn register
 *  Interrupt enable bits of channel n.
 */
typedef union {
    struct {
        /** out_done_chn_int_ena : R/W; bitpos: [0]; default: 0;
         *  The interrupt enable bit for the OUT_DONE_CH_INT interrupt.
         */
        uint32_t out_done_chn_int_ena:1;
        /** out_eof_chn_int_ena : R/W; bitpos: [1]; default: 0;
         *  The interrupt enable bit for the OUT_EOF_CH_INT interrupt.
         */
        uint32_t out_eof_chn_int_ena:1;
        /** out_dscr_err_chn_int_ena : R/W; bitpos: [2]; default: 0;
         *  The interrupt enable bit for the OUT_DSCR_ERR_CH_INT interrupt.
         */
        uint32_t out_dscr_err_chn_int_ena:1;
        /** out_total_eof_chn_int_ena : R/W; bitpos: [3]; default: 0;
         *  The interrupt enable bit for the OUT_TOTAL_EOF_CH_INT interrupt.
         */
        uint32_t out_total_eof_chn_int_ena:1;
        /** outfifo_ovf_chn_int_ena : R/W; bitpos: [4]; default: 0;
         *  The interrupt enable bit for the OUTFIFO_OVF_L1_CH_INT interrupt.
         */
        uint32_t outfifo_ovf_chn_int_ena:1;
        /** outfifo_udf_chn_int_ena : R/W; bitpos: [5]; default: 0;
         *  The interrupt enable bit for the OUTFIFO_UDF_L1_CH_INT interrupt.
         */
        uint32_t outfifo_udf_chn_int_ena:1;
        uint32_t reserved_6:26;
    };
    uint32_t val;
} gdma_out_int_ena_chn_reg_t;

/** Type of out_int_clr_chn register
 *  Interrupt clear bits of channel n.
 */
typedef union {
    struct {
        /** out_done_chn_int_clr : WT; bitpos: [0]; default: 0;
         *  Set this bit to clear the OUT_DONE_CH_INT interrupt.
         */
        uint32_t out_done_chn_int_clr:1;
        /** out_eof_chn_int_clr : WT; bitpos: [1]; default: 0;
         *  Set this bit to clear the OUT_EOF_CH_INT interrupt.
         */
        uint32_t out_eof_chn_int_clr:1;
        /** out_dscr_err_chn_int_clr : WT; bitpos: [2]; default: 0;
         *  Set this bit to clear the OUT_DSCR_ERR_CH_INT interrupt.
         */
        uint32_t out_dscr_err_chn_int_clr:1;
        /** out_total_eof_chn_int_clr : WT; bitpos: [3]; default: 0;
         *  Set this bit to clear the OUT_TOTAL_EOF_CH_INT interrupt.
         */
        uint32_t out_total_eof_chn_int_clr:1;
        /** outfifo_ovf_chn_int_clr : WT; bitpos: [4]; default: 0;
         *  Set this bit to clear the OUTFIFO_OVF_L1_CH_INT interrupt.
         */
        uint32_t outfifo_ovf_chn_int_clr:1;
        /** outfifo_udf_chn_int_clr : WT; bitpos: [5]; default: 0;
         *  Set this bit to clear the OUTFIFO_UDF_L1_CH_INT interrupt.
         */
        uint32_t outfifo_udf_chn_int_clr:1;
        uint32_t reserved_6:26;
    };
    uint32_t val;
} gdma_out_int_clr_chn_reg_t;


/** Group: Debug Registers */
/** Type of ahb_test register
 *  reserved
 */
typedef union {
    struct {
        /** ahb_testmode : R/W; bitpos: [2:0]; default: 0;
         *  reserved
         */
        uint32_t ahb_testmode:3;
        uint32_t reserved_3:1;
        /** ahb_testaddr : R/W; bitpos: [5:4]; default: 0;
         *  reserved
         */
        uint32_t ahb_testaddr:2;
        uint32_t reserved_6:26;
    };
    uint32_t val;
} gdma_ahb_test_reg_t;


/** Group: Configuration Registers */
/** Type of misc_conf register
 *  MISC register
 */
typedef union {
    struct {
        /** ahbm_rst_inter : R/W; bitpos: [0]; default: 0;
         *  Set this bit then clear this bit to reset the internal ahb FSM.
         */
        uint32_t ahbm_rst_inter:1;
        uint32_t reserved_1:1;
        /** arb_pri_dis : R/W; bitpos: [2]; default: 0;
         *  Set this bit to disable priority arbitration function.
         */
        uint32_t arb_pri_dis:1;
        /** clk_en : R/W; bitpos: [3]; default: 0;
         *  1'h1: Force clock on for register. 1'h0: Support clock only when application writes
         *  registers.
         */
        uint32_t clk_en:1;
        uint32_t reserved_4:28;
    };
    uint32_t val;
} gdma_misc_conf_reg_t;

/** Type of in_conf0_chn register
 *  Configure 0 register of Rx channel n.
 */
typedef union {
    struct {
        /** in_rst_chn : R/W; bitpos: [0]; default: 0;
         *  This bit is used to reset DMA channel n Rx FSM and Rx FIFO pointer.
         */
        uint32_t in_rst_chn:1;
        /** in_loop_test_chn : R/W; bitpos: [1]; default: 0;
         *  reserved
         */
        uint32_t in_loop_test_chn:1;
        /** indscr_burst_en_chn : R/W; bitpos: [2]; default: 0;
         *  Set this bit to 1 to enable INCR burst transfer for Rx channel n reading link
         *  descriptor when accessing internal SRAM.
         */
        uint32_t indscr_burst_en_chn:1;
        /** in_data_burst_en_chn : R/W; bitpos: [3]; default: 0;
         *  Set this bit to 1 to enable INCR burst transfer for Rx channel n receiving data
         *  when accessing internal SRAM.
         */
        uint32_t in_data_burst_en_chn:1;
        /** mem_trans_en_chn : R/W; bitpos: [4]; default: 0;
         *  Set this bit 1 to enable automatic transmitting data from memory to memory via DMA.
         */
        uint32_t mem_trans_en_chn:1;
        /** in_etm_en_chn : R/W; bitpos: [5]; default: 0;
         *  Set this bit to 1 to enable etm control mode, dma Rx channel n is triggered by etm
         *  task.
         */
        uint32_t in_etm_en_chn:1;
        uint32_t reserved_6:26;
    };
    uint32_t val;
} gdma_in_conf0_chn_reg_t;

/** Type of in_conf1_chn register
 *  Configure 1 register of Rx channel n.
 */
typedef union {
    struct {
        uint32_t reserved_0:12;
        /** in_check_owner_chn : R/W; bitpos: [12]; default: 0;
         *  Set this bit to enable checking the owner attribute of the link descriptor.
         */
        uint32_t in_check_owner_chn:1;
        uint32_t reserved_13:19;
    };
    uint32_t val;
} gdma_in_conf1_chn_reg_t;

/** Type of in_pop_chn register
 *  Pop control register of Rx channel n.
 */
typedef union {
    struct {
        /** infifo_rdata_chn : RO; bitpos: [11:0]; default: 2048;
         *  This register stores the data popping from DMA FIFO.
         */
        uint32_t infifo_rdata_chn:12;
        /** infifo_pop_chn : WT; bitpos: [12]; default: 0;
         *  Set this bit to pop data from DMA FIFO.
         */
        uint32_t infifo_pop_chn:1;
        uint32_t reserved_13:19;
    };
    uint32_t val;
} gdma_in_pop_chn_reg_t;

/** Type of in_link_chn register
 *  Link descriptor configure and control register of Rx channel n.
 */
typedef union {
    struct {
        /** inlink_addr_chn : R/W; bitpos: [19:0]; default: 0;
         *  This register stores the 20 least significant bits of the first inlink descriptor's
         *  address.
         */
        uint32_t inlink_addr_chn:20;
        /** inlink_auto_ret_chn : R/W; bitpos: [20]; default: 1;
         *  Set this bit to return to current inlink descriptor's address when there are some
         *  errors in current receiving data.
         */
        uint32_t inlink_auto_ret_chn:1;
        /** inlink_stop_chn : WT; bitpos: [21]; default: 0;
         *  Set this bit to stop dealing with the inlink descriptors.
         */
        uint32_t inlink_stop_chn:1;
        /** inlink_start_chn : WT; bitpos: [22]; default: 0;
         *  Set this bit to start dealing with the inlink descriptors.
         */
        uint32_t inlink_start_chn:1;
        /** inlink_restart_chn : WT; bitpos: [23]; default: 0;
         *  Set this bit to mount a new inlink descriptor.
         */
        uint32_t inlink_restart_chn:1;
        /** inlink_park_chn : RO; bitpos: [24]; default: 1;
         *  1: the inlink descriptor's FSM is in idle state.  0: the inlink descriptor's FSM is
         *  working.
         */
        uint32_t inlink_park_chn:1;
        uint32_t reserved_25:7;
    };
    uint32_t val;
} gdma_in_link_chn_reg_t;

/** Type of out_conf0_chn register
 *  Configure 0 register of Tx channel n.
 */
typedef union {
    struct {
        /** out_rst_chn : R/W; bitpos: [0]; default: 0;
         *  This bit is used to reset DMA channel n Tx FSM and Tx FIFO pointer.
         */
        uint32_t out_rst_chn:1;
        /** out_loop_test_chn : R/W; bitpos: [1]; default: 0;
         *  reserved
         */
        uint32_t out_loop_test_chn:1;
        /** out_auto_wrback_chn : R/W; bitpos: [2]; default: 0;
         *  Set this bit to enable automatic outlink-writeback when all the data in tx buffer
         *  has been transmitted.
         */
        uint32_t out_auto_wrback_chn:1;
        /** out_eof_mode_chn : R/W; bitpos: [3]; default: 1;
         *  EOF flag generation mode when transmitting data. 1: EOF flag for Tx channel n is
         *  generated when data need to transmit has been popped from FIFO in DMA
         */
        uint32_t out_eof_mode_chn:1;
        /** outdscr_burst_en_chn : R/W; bitpos: [4]; default: 0;
         *  Set this bit to 1 to enable INCR burst transfer for Tx channel n reading link
         *  descriptor when accessing internal SRAM.
         */
        uint32_t outdscr_burst_en_chn:1;
        /** out_data_burst_en_chn : R/W; bitpos: [5]; default: 0;
         *  Set this bit to 1 to enable INCR burst transfer for Tx channel n transmitting data
         *  when accessing internal SRAM.
         */
        uint32_t out_data_burst_en_chn:1;
        /** out_etm_en_chn : R/W; bitpos: [6]; default: 0;
         *  Set this bit to 1 to enable etm control mode, dma Tx channel n is triggered by etm
         *  task.
         */
        uint32_t out_etm_en_chn:1;
        uint32_t reserved_7:25;
    };
    uint32_t val;
} gdma_out_conf0_chn_reg_t;

/** Type of out_conf1_chn register
 *  Configure 1 register of Tx channel n.
 */
typedef union {
    struct {
        uint32_t reserved_0:12;
        /** out_check_owner_chn : R/W; bitpos: [12]; default: 0;
         *  Set this bit to enable checking the owner attribute of the link descriptor.
         */
        uint32_t out_check_owner_chn:1;
        uint32_t reserved_13:19;
    };
    uint32_t val;
} gdma_out_conf1_chn_reg_t;

/** Type of out_push_chn register
 *  Push control register of Rx channel n.
 */
typedef union {
    struct {
        /** outfifo_wdata_chn : R/W; bitpos: [8:0]; default: 0;
         *  This register stores the data that need to be pushed into DMA FIFO.
         */
        uint32_t outfifo_wdata_chn:9;
        /** outfifo_push_chn : WT; bitpos: [9]; default: 0;
         *  Set this bit to push data into DMA FIFO.
         */
        uint32_t outfifo_push_chn:1;
        uint32_t reserved_10:22;
    };
    uint32_t val;
} gdma_out_push_chn_reg_t;

/** Type of out_link_chn register
 *  Link descriptor configure and control register of Tx channel n.
 */
typedef union {
    struct {
        /** outlink_addr_chn : R/W; bitpos: [19:0]; default: 0;
         *  This register stores the 20 least significant bits of the first outlink
         *  descriptor's address.
         */
        uint32_t outlink_addr_chn:20;
        /** outlink_stop_chn : WT; bitpos: [20]; default: 0;
         *  Set this bit to stop dealing with the outlink descriptors.
         */
        uint32_t outlink_stop_chn:1;
        /** outlink_start_chn : WT; bitpos: [21]; default: 0;
         *  Set this bit to start dealing with the outlink descriptors.
         */
        uint32_t outlink_start_chn:1;
        /** outlink_restart_chn : WT; bitpos: [22]; default: 0;
         *  Set this bit to restart a new outlink from the last address.
         */
        uint32_t outlink_restart_chn:1;
        /** outlink_park_chn : RO; bitpos: [23]; default: 1;
         *  1: the outlink descriptor's FSM is in idle state.  0: the outlink descriptor's FSM
         *  is working.
         */
        uint32_t outlink_park_chn:1;
        uint32_t reserved_24:8;
    };
    uint32_t val;
} gdma_out_link_chn_reg_t;


/** Group: Version Registers */
/** Type of date register
 *  Version control register
 */
typedef union {
    struct {
        /** date : R/W; bitpos: [31:0]; default: 35660368;
         *  register version.
         */
        uint32_t date:32;
    };
    uint32_t val;
} gdma_date_reg_t;


/** Group: Status Registers */
/** Type of infifo_status_chn register
 *  Receive FIFO status of Rx channel n.
 */
typedef union {
    struct {
        /** infifo_full_chn : RO; bitpos: [0]; default: 1;
         *  L1 Rx FIFO full signal for Rx channel n.
         */
        uint32_t infifo_full_chn:1;
        /** infifo_empty_chn : RO; bitpos: [1]; default: 1;
         *  L1 Rx FIFO empty signal for Rx channel n.
         */
        uint32_t infifo_empty_chn:1;
        /** infifo_cnt_chn : RO; bitpos: [7:2]; default: 0;
         *  The register stores the byte number of the data in L1 Rx FIFO for Rx channel n.
         */
        uint32_t infifo_cnt_chn:6;
        uint32_t reserved_8:15;
        /** in_remain_under_1b_chn : RO; bitpos: [23]; default: 1;
         *  reserved
         */
        uint32_t in_remain_under_1b_chn:1;
        /** in_remain_under_2b_chn : RO; bitpos: [24]; default: 1;
         *  reserved
         */
        uint32_t in_remain_under_2b_chn:1;
        /** in_remain_under_3b_chn : RO; bitpos: [25]; default: 1;
         *  reserved
         */
        uint32_t in_remain_under_3b_chn:1;
        /** in_remain_under_4b_chn : RO; bitpos: [26]; default: 1;
         *  reserved
         */
        uint32_t in_remain_under_4b_chn:1;
        /** in_buf_hungry_chn : RO; bitpos: [27]; default: 0;
         *  reserved
         */
        uint32_t in_buf_hungry_chn:1;
        uint32_t reserved_28:4;
    };
    uint32_t val;
} gdma_infifo_status_chn_reg_t;

/** Type of in_state_chn register
 *  Receive status of Rx channel n.
 */
typedef union {
    struct {
        /** inlink_dscr_addr_chn : RO; bitpos: [17:0]; default: 0;
         *  This register stores the current inlink descriptor's address.
         */
        uint32_t inlink_dscr_addr_chn:18;
        /** in_dscr_state_chn : RO; bitpos: [19:18]; default: 0;
         *  reserved
         */
        uint32_t in_dscr_state_chn:2;
        /** in_state_chn : RO; bitpos: [22:20]; default: 0;
         *  reserved
         */
        uint32_t in_state_chn:3;
        uint32_t reserved_23:9;
    };
    uint32_t val;
} gdma_in_state_chn_reg_t;

/** Type of in_suc_eof_des_addr_chn register
 *  Inlink descriptor address when EOF occurs of Rx channel n.
 */
typedef union {
    struct {
        /** in_suc_eof_des_addr_chn : RO; bitpos: [31:0]; default: 0;
         *  This register stores the address of the inlink descriptor when the EOF bit in this
         *  descriptor is 1.
         */
        uint32_t in_suc_eof_des_addr_chn:32;
    };
    uint32_t val;
} gdma_in_suc_eof_des_addr_chn_reg_t;

/** Type of in_err_eof_des_addr_chn register
 *  Inlink descriptor address when errors occur of Rx channel n.
 */
typedef union {
    struct {
        /** in_err_eof_des_addr_chn : RO; bitpos: [31:0]; default: 0;
         *  This register stores the address of the inlink descriptor when there are some
         *  errors in current receiving data. Only used when peripheral is UHCI0.
         */
        uint32_t in_err_eof_des_addr_chn:32;
    };
    uint32_t val;
} gdma_in_err_eof_des_addr_chn_reg_t;

/** Type of in_dscr_chn register
 *  Current inlink descriptor address of Rx channel n.
 */
typedef union {
    struct {
        /** inlink_dscr_chn : RO; bitpos: [31:0]; default: 0;
         *  The address of the current inlink descriptor x.
         */
        uint32_t inlink_dscr_chn:32;
    };
    uint32_t val;
} gdma_in_dscr_chn_reg_t;

/** Type of in_dscr_bf0_chn register
 *  The last inlink descriptor address of Rx channel n.
 */
typedef union {
    struct {
        /** inlink_dscr_bf0_chn : RO; bitpos: [31:0]; default: 0;
         *  The address of the last inlink descriptor x-1.
         */
        uint32_t inlink_dscr_bf0_chn:32;
    };
    uint32_t val;
} gdma_in_dscr_bf0_chn_reg_t;

/** Type of in_dscr_bf1_chn register
 *  The second-to-last inlink descriptor address of Rx channel n.
 */
typedef union {
    struct {
        /** inlink_dscr_bf1_chn : RO; bitpos: [31:0]; default: 0;
         *  The address of the second-to-last inlink descriptor x-2.
         */
        uint32_t inlink_dscr_bf1_chn:32;
    };
    uint32_t val;
} gdma_in_dscr_bf1_chn_reg_t;

/** Type of outfifo_status_chn register
 *  Transmit FIFO status of Tx channel n.
 */
typedef union {
    struct {
        /** outfifo_full_chn : RO; bitpos: [0]; default: 0;
         *  L1 Tx FIFO full signal for Tx channel n.
         */
        uint32_t outfifo_full_chn:1;
        /** outfifo_empty_chn : RO; bitpos: [1]; default: 1;
         *  L1 Tx FIFO empty signal for Tx channel n.
         */
        uint32_t outfifo_empty_chn:1;
        /** outfifo_cnt_chn : RO; bitpos: [7:2]; default: 0;
         *  The register stores the byte number of the data in L1 Tx FIFO for Tx channel n.
         */
        uint32_t outfifo_cnt_chn:6;
        uint32_t reserved_8:15;
        /** out_remain_under_1b_chn : RO; bitpos: [23]; default: 1;
         *  reserved
         */
        uint32_t out_remain_under_1b_chn:1;
        /** out_remain_under_2b_chn : RO; bitpos: [24]; default: 1;
         *  reserved
         */
        uint32_t out_remain_under_2b_chn:1;
        /** out_remain_under_3b_chn : RO; bitpos: [25]; default: 1;
         *  reserved
         */
        uint32_t out_remain_under_3b_chn:1;
        /** out_remain_under_4b_chn : RO; bitpos: [26]; default: 1;
         *  reserved
         */
        uint32_t out_remain_under_4b_chn:1;
        uint32_t reserved_27:5;
    };
    uint32_t val;
} gdma_outfifo_status_chn_reg_t;

/** Type of out_state_chn register
 *  Transmit status of Tx channel n.
 */
typedef union {
    struct {
        /** outlink_dscr_addr_chn : RO; bitpos: [17:0]; default: 0;
         *  This register stores the current outlink descriptor's address.
         */
        uint32_t outlink_dscr_addr_chn:18;
        /** out_dscr_state_chn : RO; bitpos: [19:18]; default: 0;
         *  reserved
         */
        uint32_t out_dscr_state_chn:2;
        /** out_state_chn : RO; bitpos: [22:20]; default: 0;
         *  reserved
         */
        uint32_t out_state_chn:3;
        uint32_t reserved_23:9;
    };
    uint32_t val;
} gdma_out_state_chn_reg_t;

/** Type of out_eof_des_addr_chn register
 *  Outlink descriptor address when EOF occurs of Tx channel n.
 */
typedef union {
    struct {
        /** out_eof_des_addr_chn : RO; bitpos: [31:0]; default: 0;
         *  This register stores the address of the outlink descriptor when the EOF bit in this
         *  descriptor is 1.
         */
        uint32_t out_eof_des_addr_chn:32;
    };
    uint32_t val;
} gdma_out_eof_des_addr_chn_reg_t;

/** Type of out_eof_bfr_des_addr_chn register
 *  The last outlink descriptor address when EOF occurs of Tx channel n.
 */
typedef union {
    struct {
        /** out_eof_bfr_des_addr_chn : RO; bitpos: [31:0]; default: 0;
         *  This register stores the address of the outlink descriptor before the last outlink
         *  descriptor.
         */
        uint32_t out_eof_bfr_des_addr_chn:32;
    };
    uint32_t val;
} gdma_out_eof_bfr_des_addr_chn_reg_t;

/** Type of out_dscr_chn register
 *  Current inlink descriptor address of Tx channel n.
 */
typedef union {
    struct {
        /** outlink_dscr_chn : RO; bitpos: [31:0]; default: 0;
         *  The address of the current outlink descriptor y.
         */
        uint32_t outlink_dscr_chn:32;
    };
    uint32_t val;
} gdma_out_dscr_chn_reg_t;

/** Type of out_dscr_bf0_chn register
 *  The last inlink descriptor address of Tx channel n.
 */
typedef union {
    struct {
        /** outlink_dscr_bf0_chn : RO; bitpos: [31:0]; default: 0;
         *  The address of the last outlink descriptor y-1.
         */
        uint32_t outlink_dscr_bf0_chn:32;
    };
    uint32_t val;
} gdma_out_dscr_bf0_chn_reg_t;

/** Type of out_dscr_bf1_chn register
 *  The second-to-last inlink descriptor address of Tx channel n.
 */
typedef union {
    struct {
        /** outlink_dscr_bf1_chn : RO; bitpos: [31:0]; default: 0;
         *  The address of the second-to-last inlink descriptor x-2.
         */
        uint32_t outlink_dscr_bf1_chn:32;
    };
    uint32_t val;
} gdma_out_dscr_bf1_chn_reg_t;


/** Group: Priority Registers */
/** Type of in_pri_chn register
 *  Priority register of Rx channel n.
 */
typedef union {
    struct {
        /** rx_pri_chn : R/W; bitpos: [3:0]; default: 0;
         *  The priority of Rx channel n. The larger of the value the higher of the priority.
         */
        uint32_t rx_pri_chn:4;
        uint32_t reserved_4:28;
    };
    uint32_t val;
} gdma_in_pri_chn_reg_t;

/** Type of out_pri_chn register
 *  Priority register of Tx channel n.
 */
typedef union {
    struct {
        /** tx_pri_chn : R/W; bitpos: [3:0]; default: 0;
         *  The priority of Tx channel n. The larger of the value the higher of the priority.
         */
        uint32_t tx_pri_chn:4;
        uint32_t reserved_4:28;
    };
    uint32_t val;
} gdma_out_pri_chn_reg_t;


/** Group: Peripheral Select Registers */
/** Type of in_peri_sel_chn register
 *  Peripheral selection of Rx channel n.
 */
typedef union {
    struct {
        /** peri_in_sel_chn : R/W; bitpos: [5:0]; default: 63;
         *  This register is used to select peripheral for Rx channel n. 0:SPI2. 1: Dummy. 2:
         *  UHCI0. 3: I2S0. 4: Dummy. 5: Dummy. 6: AES. 7: SHA. 8: ADC_DAC. 9: Parallel_IO.
         *  10~15: Dummy
         */
        uint32_t peri_in_sel_chn:6;
        uint32_t reserved_6:26;
    };
    uint32_t val;
} gdma_in_peri_sel_chn_reg_t;

/** Type of out_peri_sel_chn register
 *  Peripheral selection of Tx channel n.
 */
typedef union {
    struct {
        /** peri_out_sel_chn : R/W; bitpos: [5:0]; default: 63;
         *  This register is used to select peripheral for Tx channel n. 0:SPI2. 1: Dummy. 2:
         *  UHCI0. 3: I2S0. 4: Dummy. 5: Dummy. 6: AES. 7: SHA. 8: ADC_DAC. 9: Parallel_IO.
         *  10~15: Dummy
         */
        uint32_t peri_out_sel_chn:6;
        uint32_t reserved_6:26;
    };
    uint32_t val;
} gdma_out_peri_sel_chn_reg_t;


typedef struct {
    volatile gdma_in_int_raw_chn_reg_t raw;
    volatile gdma_in_int_st_chn_reg_t st;
    volatile gdma_in_int_ena_chn_reg_t ena;
    volatile gdma_in_int_clr_chn_reg_t clr;
} gdma_in_int_chn_reg_t;

typedef struct {
    volatile gdma_out_int_raw_chn_reg_t raw;
    volatile gdma_out_int_st_chn_reg_t st;
    volatile gdma_out_int_ena_chn_reg_t ena;
    volatile gdma_out_int_clr_chn_reg_t clr;
} gdma_out_int_chn_reg_t;

typedef struct {
    volatile gdma_in_conf0_chn_reg_t in_conf0;
    volatile gdma_in_conf1_chn_reg_t in_conf1;
    volatile gdma_infifo_status_chn_reg_t infifo_status;
    volatile gdma_in_pop_chn_reg_t in_pop;
    volatile gdma_in_link_chn_reg_t in_link;
    volatile gdma_in_state_chn_reg_t in_state;
    volatile gdma_in_suc_eof_des_addr_chn_reg_t in_suc_eof_des_addr;
    volatile gdma_in_err_eof_des_addr_chn_reg_t in_err_eof_des_addr;
    volatile gdma_in_dscr_chn_reg_t in_dscr;
    volatile gdma_in_dscr_bf0_chn_reg_t in_dscr_bf0;
    volatile gdma_in_dscr_bf1_chn_reg_t in_dscr_bf1;
    volatile gdma_in_pri_chn_reg_t in_pri;
    volatile gdma_in_peri_sel_chn_reg_t in_peri_sel;
} gdma_in_chn_reg_t;

typedef struct {
    volatile gdma_out_conf0_chn_reg_t out_conf0;
    volatile gdma_out_conf1_chn_reg_t out_conf1;
    volatile gdma_outfifo_status_chn_reg_t outfifo_status;
    volatile gdma_out_push_chn_reg_t out_push;
    volatile gdma_out_link_chn_reg_t out_link;
    volatile gdma_out_state_chn_reg_t out_state;
    volatile gdma_out_eof_des_addr_chn_reg_t out_eof_des_addr;
    volatile gdma_out_eof_bfr_des_addr_chn_reg_t out_eof_bfr_des_addr;
    volatile gdma_out_dscr_chn_reg_t out_dscr;
    volatile gdma_out_dscr_bf0_chn_reg_t out_dscr_bf0;
    volatile gdma_out_dscr_bf1_chn_reg_t out_dscr_bf1;
    volatile gdma_out_pri_chn_reg_t out_pri;
    volatile gdma_out_peri_sel_chn_reg_t out_peri_sel;
} gdma_out_chn_reg_t;

typedef struct {
    volatile gdma_in_chn_reg_t in;
    uint32_t reserved_in[11];
    volatile gdma_out_chn_reg_t out;
    uint32_t reserved_out[11];
} gdma_chn_reg_t;


typedef struct gdma_dev_s {
    volatile gdma_in_int_chn_reg_t in_intr[3];
    volatile gdma_out_int_chn_reg_t out_intr[3];
    volatile gdma_ahb_test_reg_t ahb_test;
    volatile gdma_misc_conf_reg_t misc_conf;
    volatile gdma_date_reg_t date;
    uint32_t reserved_06c;
    volatile gdma_chn_reg_t channel[3];
} gdma_dev_t;

extern gdma_dev_t GDMA;

#ifndef __cplusplus
_Static_assert(sizeof(gdma_dev_t) == 0x2B0, "Invalid size of gdma_dev_t structure");
#endif

#ifdef __cplusplus
}
#endif
