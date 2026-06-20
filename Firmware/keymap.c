#ifdef ENCODER_MAP_ENABLE
const uint16_t encoder_map[][NUM_ROTARY_ENCODERS][2] = {
    [0] = { ENCODER_CW_CCW(KC_VOLU, KC_VOLD) } // Layer 0: Volume Up/Down
};
#endif