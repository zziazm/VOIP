worker.o: $(wildcard  worker.c dmq.h ../../dprint.h ../../compiler_opt.h \
  ../../cfg_core.h ../../cfg/cfg.h ../../cfg/../str.h ../../error.h \
  ../../sr_module.h ../../parser/msg_parser.h \
  ../../parser/../comp_defs.h ../../parser/../lump_struct.h \
  ../.././parser/hf.h ../../parser/../flags.h ../../parser/../ip_addr.h \
  ../../ut.h ../../config.h ../../types.h ../../mem/mem.h \
  ../../mem/pkg.h ../../mem/memapi.h ../../mem/src_loc.h \
  ../../mem/meminfo.h ../../mem/memdbg.h ../../mem/shm_mem.h \
  ../../mem/shm.h ../../mem/../lock_ops.h ../../fastlock.h \
  ../../sched_yield.h ../../parser/../md5utils.h \
  ../../parser/parse_def.h ../../parser/parse_cseq.h \
  ../../parser/parse_via.h ../../parser/parse_fline.h \
  ../../parser/parse_retry_after.h ../../ver_defs.h ../../rpc.h \
  ../../route_struct.h ../../select.h ../../usr_avp.h ../../route.h \
  ../../action.h ../../str_hash.h ../../hashes.h ../../clist.h \
  ../../kstats_types.h ../../counters.h ../../pt.h ../../globals.h \
  ../../poll_types.h ../../timer.h ../../timer_ticks.h \
  ../../socket_info.h ../../locking.h ../../lock_alloc.h \
  ../../mi/mi_types.h ../../pvar.h ../../modules/tm/tm_load.h \
  ../../modules/tm/defs.h ../../modules/tm/t_hooks.h \
  ../../modules/tm/uac.h ../../modules/tm/dlg.h \
  ../../modules/tm/../../parser/parse_rr.h ../../parser/parse_nameaddr.h \
  ../../parser/parse_param.h ../../modules/tm/h_table.h \
  ../../modules/tm/t_stats.h ../../modules/tm/../../xavp.h \
  ../../str_list.h ../../modules/tm/../../atomic_ops.h \
  ../../atomic/atomic_common.h ../../atomic/atomic_native.h \
  ../../atomic/atomic_x86.h ../../modules/tm/../../hash_func.h \
  ../../modules/tm/config.h ../../modules/tm/../../mem/shm_mem.h \
  ../../modules/tm/lock.h ../../modules/tm/sip_msg.h \
  ../../modules/tm/../../dns_cache.h ../../resolve.h ../../dns_func.h \
  ../../dns_wrappers.h ../../modules/tm/t_fwd.h \
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
  ../../modules/tm/t_append_branches.h ../../modules/tm/t_serial.h \
  ../../modules/sl/sl.h peer.h dmqnode.h worker.h ../../data_lump_rpl.h \
  ../../mod_fix.h ../../sip_msg_clone.h ../../parser/parse_from.h \
  ../../parser/parse_to.h ../../parser/parse_addr_spec.h)
