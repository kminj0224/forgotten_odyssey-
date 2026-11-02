/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7eb8  Symbol: ani_Att_Sound */

/* ani_Att_Sound(int) */

undefined4 ani_Att_Sound(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = DAT_000b818c + 0xb7ec4;
  piVar5 = *(int **)(iVar4 + DAT_000b8190);
  if (**(int **)(iVar4 + DAT_000b8194) < *piVar5) {
    param_1 = FUN_000b864e();
  }
  if (param_1 == DAT_000b8198) {
    if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar3 = (char)DAT_000b8544 + 'v';
  }
  else if (DAT_000b8198 < param_1) {
    if (param_1 == 8000) {
      if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b8598 + -0x76;
    }
    else if (param_1 < 0x1f41) {
      if (param_1 == DAT_000b81c4) {
        if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b8580 + -0xe;
      }
      else if (DAT_000b81c4 < param_1) {
        if (param_1 == DAT_000b81d8) {
          if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar3 = (char)DAT_000b85ac + '\b';
        }
        else if (DAT_000b81d8 < param_1) {
          if (param_1 == DAT_000b81e4) {
            if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
            pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            cVar3 = (char)DAT_000b8554 + -0x24;
          }
          else {
            if (param_1 != DAT_000b81e8) {
              uVar1 = FUN_000b8646();
              return uVar1;
            }
            if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
            pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            cVar3 = (char)DAT_000b8558 + -10;
          }
        }
        else if (param_1 == DAT_000b81dc) {
          if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar3 = (char)DAT_000b8584 + '\f';
        }
        else {
          if (param_1 != DAT_000b81e0) {
            uVar1 = FUN_000b8646();
            return uVar1;
          }
          if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar3 = (char)DAT_000b85a8 + -0x10;
        }
      }
      else if (param_1 == DAT_000b81c8) {
        if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b8560 + '&';
      }
      else if (DAT_000b81c8 < param_1) {
        if (param_1 == DAT_000b81d0) {
          if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar3 = (char)DAT_000b8564 + '@';
        }
        else {
          if (param_1 != DAT_000b81d4) {
            uVar1 = FUN_000b8646();
            return uVar1;
          }
          if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar3 = (char)DAT_000b8568 + 'Z';
        }
      }
      else if (param_1 == DAT_000b81cc) {
        if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b857c + -0x26;
      }
      else {
        if (param_1 != 0x1400) {
          uVar1 = FUN_000b8646();
          return uVar1;
        }
        if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b8548 + -0x70;
      }
    }
    else if (param_1 == DAT_000b81ec) {
      if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b85b4 + ':';
    }
    else if (DAT_000b81ec < param_1) {
      if (param_1 == DAT_000b8204) {
        if (*(char *)(**(int **)(iVar4 + DAT_000b8654) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b8658 + -0x32;
      }
      else if (DAT_000b8204 < param_1) {
        if (param_1 == DAT_000b8210) {
          if (*(char *)(**(int **)(iVar4 + DAT_000b8654) + 1) == '\0') goto LAB_000b8648;
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar3 = (char)DAT_000b8664 + '\x16';
        }
        else {
          if (param_1 != DAT_000b8214) {
            uVar1 = FUN_000b8646();
            return uVar1;
          }
          if (*(char *)(**(int **)(iVar4 + DAT_000b8654) + 1) == '\0') goto LAB_000b8648;
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar3 = (char)DAT_000b8668 + '.';
        }
      }
      else if (param_1 == DAT_000b8208) {
        if (*(char *)(**(int **)(iVar4 + DAT_000b8654) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b866c + 'F';
      }
      else {
        if (param_1 != DAT_000b820c) {
          uVar1 = FUN_000b8646();
          return uVar1;
        }
        if (*(char *)(**(int **)(iVar4 + DAT_000b8654) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b865c + -0x1a;
      }
    }
    else if (param_1 == DAT_000b81f0) {
      if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b85a4 + -0x2a;
    }
    else if (DAT_000b81f0 < param_1) {
      if (param_1 == DAT_000b81fc) {
        if (*(char *)(**(int **)(iVar4 + DAT_000b8654) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b8660 + -2;
      }
      else {
        if (param_1 != DAT_000b8200) {
          uVar1 = FUN_000b8646();
          return uVar1;
        }
        if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b85b0 + '\"';
      }
    }
    else if (param_1 == DAT_000b81f4) {
      if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b859c + -0x5c;
    }
    else {
      if (param_1 != DAT_000b81f8) {
        uVar1 = FUN_000b8646();
        return uVar1;
      }
      if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b85a0 + -0x42;
    }
  }
  else if (param_1 == DAT_000b819c) {
    if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar3 = (char)DAT_000b8574 + -0x5a;
  }
  else if (DAT_000b819c < param_1) {
    if (param_1 == 0xaf0) {
      if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b855c + '\x0e';
    }
    else if (param_1 < 0xaf1) {
      if (param_1 == 0x960) {
        if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b8550 + -0x3e;
      }
      else if (param_1 < 0x961) {
        if (param_1 == DAT_000b81a4) {
          if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar3 = (char)DAT_000b8578 + -0x40;
        }
        else {
          if (param_1 != DAT_000b81a8) {
            uVar1 = FUN_000b8646();
            return uVar1;
          }
          if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar3 = (char)DAT_000b854c + -0x56;
        }
      }
      else if (param_1 == DAT_000b81ac) {
        if (*(char *)(**(int **)(iVar4 + DAT_000b8218) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b823c + 'p';
      }
      else {
        if (param_1 != DAT_000b81b0) {
          uVar1 = FUN_000b8646();
          return uVar1;
        }
        if (*(char *)(**(int **)(iVar4 + DAT_000b8218) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b8240 + -0x76;
      }
    }
    else if (param_1 == DAT_000b81b4) {
      if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b858c + '>';
    }
    else if (DAT_000b81b4 < param_1) {
      if (param_1 == DAT_000b81bc) {
        if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b8590 + 'X';
      }
      else {
        if (param_1 != DAT_000b81c0) {
          uVar1 = FUN_000b8646();
          return uVar1;
        }
        if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar3 = (char)DAT_000b8594 + 'r';
      }
    }
    else if (param_1 == DAT_000b81b8) {
      if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b8540 + '^';
    }
    else {
      if (param_1 != 0xe10) {
        uVar1 = FUN_000b8646();
        return uVar1;
      }
      if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b8588 + '&';
    }
  }
  else if (param_1 == 0xaa) {
    if (*(char *)(**(int **)(iVar4 + DAT_000b8218) + 1) == '\0') goto LAB_000b8648;
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar3 = (char)DAT_000b8228 + -0x10;
  }
  else if (param_1 < 0xab) {
    if (param_1 == 0x78) {
      if (*(char *)(**(int **)(iVar4 + DAT_000b8218) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b8220 + -0x48;
    }
    else if (param_1 < 0x79) {
      if (param_1 != 0x6e) {
        FUN_000b8646();
      }
      if (*(char *)(**(int **)(iVar4 + DAT_000b8218) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b821c + -0x60;
    }
    else if (param_1 == 0x82) {
      if (*(char *)(**(int **)(iVar4 + DAT_000b8218) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b8224 + -0x28;
    }
    else {
      if (param_1 != 0xa0) {
        FUN_000b8646();
      }
      if (*(char *)(**(int **)(iVar4 + DAT_000b8218) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b822c + '\n';
    }
  }
  else if (param_1 == 0x104) {
    if (*(char *)(**(int **)(iVar4 + DAT_000b8218) + 1) == '\0') goto LAB_000b8648;
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar3 = (char)DAT_000b8230 + '\"';
  }
  else if (param_1 < 0x105) {
    if (param_1 == 0xb4) {
      if (*(char *)(**(int **)(iVar4 + DAT_000b8218) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b8238 + 'V';
    }
    else {
      if (param_1 != 0xe6) {
        uVar1 = FUN_000b8646();
        return uVar1;
      }
      if (*(char *)(**(int **)(iVar4 + DAT_000b8218) + 1) == '\0') goto LAB_000b8648;
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar3 = (char)DAT_000b8234 + '<';
    }
  }
  else if (param_1 == DAT_000b81a0) {
    if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar3 = (char)DAT_000b856c + 't';
  }
  else {
    if (param_1 != 2000) {
      uVar1 = FUN_000b8646();
      return uVar1;
    }
    if (*(char *)(**(int **)(iVar4 + DAT_000b853c) + 1) == '\0') goto LAB_000b8648;
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar3 = (char)DAT_000b8570 + -0x72;
  }
  CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)cVar3);
LAB_000b8648:
  *piVar5 = *piVar5 + 1;
  return 1;
}


