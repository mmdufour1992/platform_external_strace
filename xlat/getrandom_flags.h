/* Generated by ./xlat/gen.sh from ./xlat/getrandom_flags.in; do not edit. */
#if !(defined(GRND_NONBLOCK) || (defined(HAVE_DECL_GRND_NONBLOCK) && HAVE_DECL_GRND_NONBLOCK))
# define GRND_NONBLOCK 1
#endif
#if !(defined(GRND_RANDOM) || (defined(HAVE_DECL_GRND_RANDOM) && HAVE_DECL_GRND_RANDOM))
# define GRND_RANDOM 2
#endif

#ifdef IN_MPERS

# error static const struct xlat getrandom_flags in mpers mode

#else

static
const struct xlat getrandom_flags[] = {
 XLAT(GRND_NONBLOCK),
 XLAT(GRND_RANDOM),
 XLAT_END
};

#endif /* !IN_MPERS */