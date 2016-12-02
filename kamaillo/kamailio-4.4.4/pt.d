pt.o: $(wildcard  pt.c pt.h globals.h types.h ip_addr.h str.h compiler_opt.h ut.h \
  comp_defs.h config.h dprint.h cfg_core.h cfg/cfg.h mem/mem.h mem/pkg.h \
  mem/memapi.h mem/src_loc.h mem/meminfo.h mem/memdbg.h mem/shm_mem.h \
  mem/shm.h mem/../lock_ops.h fastlock.h sched_yield.h poll_types.h \
  timer.h clist.h timer_ticks.h socket_info.h locking.h lock_alloc.h \
  tcp_init.h sr_module.h parser/msg_parser.h parser/../lump_struct.h \
  parser/hf.h parser/../flags.h parser/../md5utils.h parser/parse_def.h \
  parser/parse_cseq.h parser/parse_via.h parser/parse_fline.h \
  parser/parse_retry_after.h parser/../error.h ver_defs.h rpc.h \
  route_struct.h select.h usr_avp.h route.h action.h str_hash.h hashes.h \
  kstats_types.h counters.h mi/mi_types.h pvar.h rand/fastrand.h \
  daemonize.h)
