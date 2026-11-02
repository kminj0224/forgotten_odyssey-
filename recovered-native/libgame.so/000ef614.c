/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ef614  Symbol: Effect_init */

/* Effect::Effect_init(int) */

void __thiscall Effect::Effect_init(Effect *this,int param_1)

{
  *(undefined4 *)(this + 0x110) = 0;
  if (param_1 == 0xb4) {
    Effect_Lode_180(this);
  }
  else if (param_1 < 0xb5) {
    if (param_1 == 3) {
      Effect_Lode_3(this);
    }
    else if (param_1 < 4) {
      if (param_1 == 1) {
        Effect_Lode_1(this);
      }
      else if (param_1 == 2) {
        Effect_Lode_2(this);
      }
    }
    else if (param_1 == 4) {
      Effect_Lode_Critical(this);
    }
    else if (param_1 == 5) {
      Effect_Lode_5(this);
    }
  }
  else if (param_1 == DAT_000ef6a0) {
    Effect_Lode_3300(this);
  }
  else {
    if (param_1 == DAT_000ef6a0 || param_1 < DAT_000ef6a0) {
      if (param_1 == DAT_000ef6a4) {
        Effect_Lode_2100(this);
        return;
      }
      if (param_1 != 0xaf0) {
        return;
      }
    }
    else if (param_1 != DAT_000ef6a8) {
      if (param_1 != DAT_000ef6ac) {
        return;
      }
      Effect_Lode_8020(this);
      return;
    }
    Effect_Lode_28003800(this);
  }
  return;
}


