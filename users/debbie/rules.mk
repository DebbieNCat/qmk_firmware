LTO_ENABLE = yes

SRC += debbie.c

ifdef COMBO_ENABLE
	INTROSPECTION_KEYMAP_C = key_combos.c
endif

ifdef TAP_DANCE_ENABLE
	SRC += tapdances.c
endif

