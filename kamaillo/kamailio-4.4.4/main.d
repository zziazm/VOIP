main.o: $(wildcard  main.c config.h types.h dprint.h compiler_opt.h cfg_core.h \
  cfg/cfg.h cfg/../str.h daemonize.h route.h error.h route_struct.h \
  select.h parser/msg_parser.h parser/../comp_defs.h \
  parser/../lump_struct.h parser/hf.h parser/../flags.h \
  parser/../ip_addr.h ut.h mem/mem.h mem/pkg.h mem/memapi.h \
  mem/src_loc.h mem/meminfo.h mem/memdbg.h mem/shm_mem.h mem/shm.h \
  mem/../lock_ops.h fastlock.h sched_yield.h parser/../md5utils.h \
  parser/parse_def.h parser/parse_cseq.h parser/parse_via.h \
  parser/parse_fline.h parser/parse_retry_after.h usr_avp.h action.h \
  str_hash.h hashes.h clist.h udp_server.h globals.h poll_types.h \
  shm_init.h sr_module.h ver_defs.h rpc.h kstats_types.h counters.h pt.h \
  timer.h timer_ticks.h socket_info.h locking.h lock_alloc.h \
  mi/mi_types.h pvar.h resolve.h dns_func.h dns_wrappers.h \
  parser/parse_hname2.h parser/digest/digest_parser.h name_alias.h \
  hash_func.h script_cb.h nonsip_hooks.h events.h signals.h tcp_init.h \
  tcp_options.h tls_hooks_init.h sctp_core.h rpc_lookup.h core_cmd.h \
  lock_ops_init.h atomic_ops_init.h dns_cache.h atomic_ops.h \
  atomic/atomic_common.h atomic/atomic_native.h atomic/atomic_x86.h \
  dst_blacklist.h rand/fastrand.h stats.h cfg/cfg_struct.h \
  cfg/../mem/shm_mem.h cfg/../bit_test.h endianness.h basex.h pvapi.h \
  pv_core.h ppcfg.h sock_ut.h async_task.h dset.h qvalue.h timer_proc.h \
  local_timer.h timer_funcs.h srapi.h ver.h)
