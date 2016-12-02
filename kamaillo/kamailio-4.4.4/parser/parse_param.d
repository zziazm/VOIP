parser/parse_param.o: $(wildcard  parser/parse_param.c parser/../str.h parser/../ut.h \
  parser/../comp_defs.h parser/../compiler_opt.h parser/../config.h \
  parser/../types.h parser/../dprint.h parser/../cfg_core.h \
  parser/../cfg/cfg.h parser/../mem/mem.h parser/../mem/pkg.h \
  parser/../mem/memapi.h parser/../mem/src_loc.h parser/../mem/meminfo.h \
  parser/../mem/memdbg.h parser/../mem/shm_mem.h parser/../mem/shm.h \
  parser/../mem/../lock_ops.h parser/../fastlock.h \
  parser/../sched_yield.h parser/../trim.h parser/parse_param.h)
