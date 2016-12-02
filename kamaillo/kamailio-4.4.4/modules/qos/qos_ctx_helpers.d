qos_ctx_helpers.o: $(wildcard  qos_ctx_helpers.c ../../mem/mem.h \
  ../../mem/../config.h ../../mem/../types.h ../../mem/../dprint.h \
  ../../mem/../compiler_opt.h ../../mem/../cfg_core.h \
  ../../mem/../cfg/cfg.h ../../mem/../cfg/../str.h ../../mem/pkg.h \
  ../../mem/memapi.h ../../mem/src_loc.h ../../mem/meminfo.h \
  ../../mem/memdbg.h ../../mem/shm_mem.h ../../mem/shm.h \
  ../../mem/../lock_ops.h ../../mem/../fastlock.h \
  ../../mem/../sched_yield.h ../../parser/sdp/sdp_cloner.h \
  ../../parser/sdp/sdp.h ../../parser/sdp/../msg_parser.h \
  ../../parser/sdp/../../comp_defs.h \
  ../../parser/sdp/../../lump_struct.h ../../mem/.././parser/hf.h \
  ../../parser/sdp/../../flags.h ../../parser/sdp/../../ip_addr.h \
  ../../mem/../ut.h ../../mem/../mem/shm_mem.h \
  ../../parser/sdp/../../md5utils.h ../../parser/sdp/../parse_def.h \
  ../../parser/sdp/../parse_cseq.h ../../parser/sdp/../parse_via.h \
  ../../parser/sdp/../parse_fline.h \
  ../../parser/sdp/../parse_retry_after.h ../../parser/sdp/../../error.h \
  ../dialog/dlg_hash.h ../dialog/../../locking.h \
  ../../mem/../lock_alloc.h ../dialog/../../lib/kmi/mi.h \
  ../dialog/../../lib/kmi/../../mi/mi_types.h \
  ../dialog/../../lib/kmi/tree.h ../dialog/../../lib/kmi/attr.h \
  ../dialog/../../timer.h ../../mem/../clist.h \
  ../../mem/../timer_ticks.h ../dialog/../../atomic_ops.h \
  ../../mem/../atomic/atomic_common.h \
  ../../mem/../atomic/atomic_native.h ../../mem/../atomic/atomic_x86.h \
  ../dialog/dlg_timer.h ../dialog/dlg_cb.h qos_ctx_helpers.h qos_cb.h)
