dset.o: $(wildcard  dset.c dprint.h compiler_opt.h cfg_core.h cfg/cfg.h cfg/../str.h \
  config.h types.h parser/parser_f.h parser/../comp_defs.h \
  parser/parse_uri.h parser/../parser/msg_parser.h \
  parser/../lump_struct.h parser/hf.h parser/../flags.h \
  parser/../ip_addr.h ut.h mem/mem.h mem/pkg.h mem/memapi.h \
  mem/src_loc.h mem/meminfo.h mem/memdbg.h mem/shm_mem.h mem/shm.h \
  mem/../lock_ops.h fastlock.h sched_yield.h parser/../md5utils.h \
  parser/parse_def.h parser/parse_cseq.h parser/parse_via.h \
  parser/parse_fline.h parser/parse_retry_after.h parser/../error.h \
  globals.h poll_types.h hash_func.h hashes.h dset.h qvalue.h)
