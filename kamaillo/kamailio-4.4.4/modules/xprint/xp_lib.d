xp_lib.o: $(wildcard  xp_lib.c ../../dprint.h ../../compiler_opt.h ../../cfg_core.h \
  ../../cfg/cfg.h ../../cfg/../str.h ../../mem/mem.h \
  ../../mem/../config.h ../../types.h ../../mem/pkg.h ../../mem/memapi.h \
  ../../mem/src_loc.h ../../mem/meminfo.h ../../mem/memdbg.h \
  ../../mem/shm_mem.h ../../mem/shm.h ../../mem/../lock_ops.h \
  ../../fastlock.h ../../sched_yield.h ../../ut.h ../../comp_defs.h \
  ../../trim.h ../../dset.h ../../ip_addr.h ../../qvalue.h ../../flags.h \
  ../../parser/msg_parser.h ../../parser/../lump_struct.h \
  ../.././parser/hf.h ../../parser/../md5utils.h \
  ../../parser/parse_def.h ../../parser/parse_cseq.h \
  ../../parser/parse_via.h ../../parser/parse_fline.h \
  ../../parser/parse_retry_after.h ../../parser/../error.h \
  ../../resolve.h ../../counters.h ../../pt.h ../../globals.h \
  ../../poll_types.h ../../timer.h ../../clist.h ../../timer_ticks.h \
  ../../socket_info.h ../../locking.h ../../lock_alloc.h \
  ../../dns_func.h ../../dns_wrappers.h ../../usr_avp.h \
  ../../parser/parse_from.h ../../parser/parse_to.h \
  ../../parser/parse_addr_spec.h ../../parser/parse_uri.h \
  ../../parser/parse_hname2.h ../../parser/parse_refer_to.h xp_lib.h \
  ../../select.h)
