/* Generated by ./xlat/gen.sh from ./xlat/sigsys_codes.in; do not edit. */

static const struct xlat sigsys_codes[] = {
#if !(defined(SYS_SECCOMP) || (defined(HAVE_DECL_SYS_SECCOMP) && HAVE_DECL_SYS_SECCOMP))
# define SYS_SECCOMP 1
#endif
 XLAT(SYS_SECCOMP),
 XLAT_END
};