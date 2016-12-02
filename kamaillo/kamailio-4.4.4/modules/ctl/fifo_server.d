fifo_server.o: $(wildcard  fifo_server.c ../../dprint.h ../../compiler_opt.h \
  ../../cfg_core.h ../../cfg/cfg.h ../../cfg/../str.h ../../ut.h \
  ../../comp_defs.h ../../config.h ../../types.h ../../mem/mem.h \
  ../../mem/pkg.h ../../mem/memapi.h ../../mem/src_loc.h \
  ../../mem/meminfo.h ../../mem/memdbg.h ../../mem/shm_mem.h \
  ../../mem/shm.h ../../mem/../lock_ops.h ../../fastlock.h \
  ../../sched_yield.h ../../error.h ../../globals.h ../../ip_addr.h \
  ../../poll_types.h ../../sr_module.h ../../parser/msg_parser.h \
  ../../parser/../lump_struct.h ../.././parser/hf.h \
  ../../parser/../flags.h ../../parser/../md5utils.h \
  ../../parser/parse_def.h ../../parser/parse_cseq.h \
  ../../parser/parse_via.h ../../parser/parse_fline.h \
  ../../parser/parse_retry_after.h ../../ver_defs.h ../../rpc.h \
  ../../route_struct.h ../../select.h ../../usr_avp.h ../../route.h \
  ../../action.h ../../str_hash.h ../../hashes.h ../../clist.h \
  ../../kstats_types.h ../../counters.h ../../pt.h ../../timer.h \
  ../../timer_ticks.h ../../socket_info.h ../../locking.h \
  ../../lock_alloc.h ../../mi/mi_types.h ../../pvar.h ../../tsend.h \
  fifo_server.h io_listener.h ctrl_socks.h init_socks.h ctl.h)
