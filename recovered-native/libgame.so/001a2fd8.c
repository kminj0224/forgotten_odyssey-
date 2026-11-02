/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a2fd8  Symbol: FUN_001a2fd8 */

undefined4 FUN_001a2fd8(char *param_1,int param_2)

{
  char cVar1;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 < 4) {
    if (param_2 != 3) {
      if (param_2 != 2) {
        return 0;
      }
      goto LAB_001a30aa;
    }
  }
  else {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      if (param_1[1] == '\0') {
        if ((param_1[2] == '\0') && (param_1[3] == '<')) {
          return 5;
        }
        if ((param_1[2] == '<') && (param_1[3] == '\0')) {
          return 7;
        }
      }
      else if (((param_1[1] == '<') && (param_1[2] == '\0')) && (param_1[3] == '\0')) {
        return 8;
      }
      if (((param_1[1] == '<') && (param_1[2] == '\0')) && (param_1[3] == '?')) {
        return 3;
      }
    }
    else if (cVar1 == '<') {
      if (((param_1[1] == '\0') && (param_1[2] == '\0')) && (param_1[3] == '\0')) {
        return 4;
      }
      if (param_1[1] == '?') {
        if ((param_1[2] == 'x') && (param_1[3] == 'm')) {
          return 1;
        }
      }
      else if (((param_1[1] == '\0') && (param_1[2] == '?')) && (param_1[3] == '\0')) {
        return 2;
      }
    }
    else if ((((cVar1 == 'L') && (param_1[1] == 'o')) && (param_1[2] == -0x59)) &&
            (param_1[3] == -0x6c)) {
      return 6;
    }
  }
  if (((*param_1 == -0x11) && (param_1[1] == -0x45)) && (param_1[2] == -0x41)) {
    return 1;
  }
LAB_001a30aa:
  if (*param_1 == -2) {
    if (param_1[1] == -1) {
      return 3;
    }
  }
  else if ((*param_1 == -1) && (param_1[1] == -2)) {
    return 2;
  }
  return 0;
}


