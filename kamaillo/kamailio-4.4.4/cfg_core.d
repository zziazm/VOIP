cfg_core.o: $(wildcard  cfg_core.c dprint.h compiler_opt.h cfg_core.h cfg/cfg.h \
  cfg/../str.h dst_blacklist.h ip_addr.h ut.h comp_defs.h config.h \
  types.h mem/mem.h mem/pkg.h mem/memapi.h mem/src_loc.h mem/meminfo.h \
  mem/memdbg.h mem/shm_mem.h mem/shm.h mem/../lock_ops.h fastlock.h \
  sched_yield.h parser/msg_parser.h parser/../lump_struct.h parser/hf.h \
  parser/../flags.h parser/../md5utils.h parser/parse_def.h \
  parser/parse_cseq.h parser/parse_via.h parser/parse_fline.h \
  parser/parse_retry_after.h parser/../error.h timer_ticks.h resolve.h \
  counters.h pt.h globals.h poll_types.h timer.h clist.h socket_info.h \
  locking.h lock_alloc.h dns_func.h dns_wrappers.h dns_cache.h \
  atomic_ops.h atomic/atomic_common.h atomic/atomic_native.h \
  atomic/atomic_x86.h msg_translator.h sock_ut.h)
