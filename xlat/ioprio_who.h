/* Generated by ./xlat/gen.sh from ./xlat/ioprio_who.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat ioprio_who in mpers mode

#else

static
const struct xlat ioprio_who[] = {
 XLAT(IOPRIO_WHO_PROCESS),
 XLAT(IOPRIO_WHO_PGRP),
 XLAT(IOPRIO_WHO_USER),
 XLAT_END
};

#endif /* !IN_MPERS */
