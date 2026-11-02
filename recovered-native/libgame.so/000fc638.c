/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fc638  Symbol: Boss_Number_Call */

/* Boss_Number_Call(int) */

void Boss_Number_Call(int param_1)

{
  if (param_1 == DAT_000fc6d4) {
    Boss_18000_Skill_Call();
  }
  else if (param_1 == DAT_000fc6d4 || param_1 < DAT_000fc6d4) {
    if (param_1 != DAT_000fc6d8) {
      if (DAT_000fc6d8 < param_1) {
        if (param_1 == 16000) {
          Boss_16000_Skill_Call();
          return;
        }
        if (param_1 != DAT_000fc6e4) {
          return;
        }
        Boss_17000_Skill_Call();
        return;
      }
      if (param_1 == DAT_000fc6dc) {
        Boss_13000_Skill_Call();
        return;
      }
      if (param_1 != DAT_000fc6e0) {
        return;
      }
    }
    Boss_15000_Skill_Call();
  }
  else if (param_1 == DAT_000fc6e8) {
    Boss_21100_Skill_Call();
  }
  else if (param_1 == DAT_000fc6e8 || param_1 < DAT_000fc6e8) {
    if (param_1 == DAT_000fc6ec) {
      Boss_20000_Skill_Call();
    }
    else if (param_1 == DAT_000fc6f0) {
      Boss_21000_Skill_Call();
    }
  }
  else if (param_1 == DAT_000fc6f4) {
    Boss_24000_Skill_Call();
  }
  else if (param_1 == DAT_000fc6f8) {
    Boss_25000_Skill_Call();
  }
  else if (param_1 == DAT_000fc6fc) {
    Boss_23000_Skill_Call();
  }
  return;
}


