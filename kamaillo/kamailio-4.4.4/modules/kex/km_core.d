km_core.o: $(wildcard  km_core.c ../../dprint.h ../../compiler_opt.h ../../cfg_core.h \
  ../../cfg/cfg.h ../../cfg/../str.h ../../dset.h ../../ip_addr.h \
  ../../ut.h ../../comp_defs.h ../../config.h ../../types.h \
  ../../mem/mem.h ../../mem/pkg.h ../../mem/memapi.h ../../mem/src_loc.h \
  ../../mem/meminfo.h ../../mem/memdbg.h ../../mem/shm_mem.h \
  ../../mem/shm.h ../../mem/../lock_ops.h ../../fastlock.h \
  ../../sched_yield.h ../../qvalue.h ../../flags.h \
  ../../parser/msg_parser.h ../../parser/../lump_struct.h \
  ../.././parser/hf.h ../../parser/../md5utils.h \
  ../../parser/parse_def.h ../../parser/parse_cseq.h \
  ../../parser/parse_via.h ../../parser/parse_fline.h \
  ../../parser/parse_retry_after.h ../../parser/../error.h ../../pvar.h \
  ../../usr_avp.h ../../lvalue.h ../../rvalue.h ../../select.h \
  ../../route.h ../../route_struct.h ../../action.h ../../str_hash.h \
  ../../hashes.h ../../clist.h ../../mod_fix.h ../../sr_module.h \
  ../../ver_defs.h ../../rpc.h ../../kstats_types.h ../../counters.h \
  ../../pt.h ../../globals.h ../../poll_types.h ../../timer.h \
  ../../timer_ticks.h ../../socket_info.h ../../locking.h \
  ../../lock_alloc.h ../../mi/mi_types.h km_core.h)
