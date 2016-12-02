statistics.o: $(wildcard  statistics.c statistics.h ../../hashes.h ../../str.h \
  ../../locking.h ../../lock_ops.h ../../fastlock.h ../../sched_yield.h \
  ../../lock_alloc.h ../../mem/mem.h ../../mem/../config.h ../../types.h \
  ../../mem/../dprint.h ../../compiler_opt.h ../../cfg_core.h \
  ../../cfg/cfg.h ../../mem/pkg.h ../../mem/memapi.h ../../mem/src_loc.h \
  ../../mem/meminfo.h ../../mem/memdbg.h ../../mem/shm_mem.h \
  ../../mem/shm.h ../../modules/tm/h_table.h ../../modules/tm/defs.h \
  ../../modules/tm/t_stats.h ../../modules/tm/../../rpc.h \
  ../../modules/tm/../../pt.h ../../globals.h ../../ip_addr.h ../../ut.h \
  ../../comp_defs.h ../../poll_types.h ../../timer.h ../../clist.h \
  ../../timer_ticks.h ../../socket_info.h \
  ../../modules/tm/../../parser/msg_parser.h \
  ../../modules/tm/../../parser/../lump_struct.h ../.././parser/hf.h \
  ../../modules/tm/../../parser/../flags.h \
  ../../modules/tm/../../parser/../md5utils.h \
  ../../modules/tm/../../parser/parse_def.h \
  ../../modules/tm/../../parser/parse_cseq.h \
  ../../modules/tm/../../parser/parse_via.h \
  ../../modules/tm/../../parser/parse_fline.h \
  ../../modules/tm/../../parser/parse_retry_after.h \
  ../../modules/tm/../../parser/../error.h \
  ../../modules/tm/../../usr_avp.h ../../modules/tm/../../xavp.h \
  ../../str_list.h ../../modules/tm/../../atomic_ops.h \
  ../../atomic/atomic_common.h ../../atomic/atomic_native.h \
  ../../atomic/atomic_x86.h ../../modules/tm/../../hash_func.h \
  ../../modules/tm/config.h ../../modules/tm/../../mem/shm_mem.h \
  ../../modules/tm/lock.h ../../modules/tm/sip_msg.h \
  ../../modules/tm/t_hooks.h ../../modules/tm/../../dns_cache.h \
  ../../resolve.h ../../counters.h ../../dns_func.h ../../dns_wrappers.h \
  seas.h ../../sr_module.h ../../ver_defs.h ../../route_struct.h \
  ../../select.h ../../route.h ../../action.h ../../str_hash.h \
  ../../kstats_types.h ../../mi/mi_types.h ../../pvar.h \
  ../../modules/tm/tm_load.h ../../modules/tm/uac.h \
  ../../modules/tm/dlg.h ../../modules/tm/../../parser/parse_rr.h \
  ../../modules/tm/../../parser/parse_nameaddr.h \
  ../../modules/tm/../../parser/parse_param.h ../../modules/tm/t_fwd.h \
  ../../modules/tm/../../proxy.h ../../modules/tm/t_lookup.h \
  ../../modules/tm/t_funcs.h ../../modules/tm/../../udp_server.h \
  ../../modules/tm/../../msg_translator.h \
  ../../modules/tm/../../forward.h ../../stats.h ../../tcp_server.h \
  ../../tcp_conn.h ../../tcp_init.h ../../tcp_options.h \
  ../../sctp_core.h ../../events.h \
  ../../modules/tm/../../parser/parse_uri.h ../../modules/tm/timer.h \
  ../../modules/tm/ut.h ../../modules/tm/t_reply.h \
  ../../modules/tm/../../tags.h ../../crc.h ../../modules/tm/callid.h \
  ../../modules/tm/t_cancel.h ../../modules/tm/t_suspend.h \
  ../../modules/tm/t_append_branches.h ../../modules/tm/t_serial.h ha.h \
  cluster.h)
