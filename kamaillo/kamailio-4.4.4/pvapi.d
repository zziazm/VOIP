pvapi.o: $(wildcard  pvapi.c mem/mem.h mem/../config.h types.h mem/../dprint.h \
  compiler_opt.h cfg_core.h cfg/cfg.h cfg/../str.h mem/pkg.h \
  mem/memapi.h mem/src_loc.h mem/meminfo.h mem/memdbg.h mem/shm_mem.h \
  mem/shm.h mem/../lock_ops.h fastlock.h sched_yield.h ut.h comp_defs.h \
  hashes.h route.h error.h route_struct.h select.h parser/msg_parser.h \
  parser/../lump_struct.h parser/hf.h parser/../flags.h \
  parser/../ip_addr.h parser/../md5utils.h parser/parse_def.h \
  parser/parse_cseq.h parser/parse_via.h parser/parse_fline.h \
  parser/parse_retry_after.h usr_avp.h action.h str_hash.h clist.h \
  pvapi.h pvar.h)
