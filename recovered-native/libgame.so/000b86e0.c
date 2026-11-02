/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b86e0  Symbol: ani_Die_Sound */

/* ani_Die_Sound(int) */

undefined4 ani_Die_Sound(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = DAT_000b89b0 + 0xb86ea;
  piVar4 = *(int **)(iVar3 + DAT_000b89b4);
  if (**(int **)(iVar3 + DAT_000b89b8) < *piVar4) {
    param_1 = FUN_000b8f52();
  }
  if (param_1 == DAT_000b89bc) {
    if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8d80 + -0xe));
    uVar1 = FUN_000b8f4c();
    return uVar1;
  }
  if (param_1 <= DAT_000b89bc) {
    if (param_1 == DAT_000b89c0) {
      if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8db0 + 'Z'));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 <= DAT_000b89c0) {
      if (param_1 == 0xaa) {
        if (*(char *)(**(int **)(iVar3 + DAT_000b8a3c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8a50 + 'R'));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 < 0xab) {
        if (param_1 == 0x82) {
          if (*(char *)(**(int **)(iVar3 + DAT_000b8a3c) + 1) == '\0') {
            uVar1 = FUN_000b8f4c();
            return uVar1;
          }
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8a48 + '\x16'));
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        if (param_1 < 0x83) {
          if (param_1 == 0x6e) {
            if (*(char *)(**(int **)(iVar3 + DAT_000b8a3c) + 1) == '\0') {
              uVar1 = FUN_000b8f4c();
              return uVar1;
            }
            pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8a40 + -0x26));
            uVar1 = FUN_000b8f4c();
            return uVar1;
          }
          if (param_1 != 0x78) {
            FUN_000b8f4c();
          }
          if (*(char *)(**(int **)(iVar3 + DAT_000b8a3c) + 1) == '\0') {
            uVar1 = FUN_000b8f4c();
            return uVar1;
          }
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8a44 + -8));
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        if (param_1 == 0x96) {
          if (*(char *)(**(int **)(iVar3 + DAT_000b8a3c) + 1) == '\0') {
            uVar1 = FUN_000b8f4c();
            return uVar1;
          }
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8a4c + '4'));
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        if (param_1 != 0xa0) {
          FUN_000b8f4c();
        }
        if (*(char *)(**(int **)(iVar3 + DAT_000b8a3c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8a54 + 'p'));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 == 0x104) {
        if (*(char *)(**(int **)(iVar3 + DAT_000b8a3c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8a58 + -0x72));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 < 0x105) {
        if (param_1 == 0xb4) {
          if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
            uVar1 = FUN_000b8f4c();
            return uVar1;
          }
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8d70 + 'z'));
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        if (param_1 != 0xe6) {
          FUN_000b8f4c();
        }
        if (*(char *)(**(int **)(iVar3 + DAT_000b8a3c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8a5c + -0x54));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 == DAT_000b89c4) {
        if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8da8 + '\x1e'));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 != 2000) {
        FUN_000b8f4c();
      }
      if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8dac + '<'));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 == 0xaf0) {
      if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8d98 + -0x5a));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 < 0xaf1) {
      if (param_1 == 0x960) {
        if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8d8c + 'L'));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 < 0x961) {
        if (param_1 == DAT_000b89c8) {
          if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
            uVar1 = FUN_000b8f4c();
            return uVar1;
          }
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8db4 + 'x'));
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        if (param_1 != DAT_000b89cc) {
          FUN_000b8f4c();
        }
        if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8d88 + '.'));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 == DAT_000b89d0) {
        if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8d74 + -0x68));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 != DAT_000b89d4) {
        FUN_000b8f4c();
      }
      if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8d78 + -0x4a));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 == DAT_000b89d8) {
      if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8dc8 + '\x0e'));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 <= DAT_000b89d8) {
      if (param_1 == DAT_000b89dc) {
        if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8d7c + -0x2c));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 != 0xe10) {
        FUN_000b8f4c();
      }
      if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8dc4 + -0x10));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 == DAT_000b89e0) {
      if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8dcc + ','));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 != DAT_000b89e4) {
      FUN_000b8f4c();
    }
    if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8dd0 + 'J'));
    uVar1 = FUN_000b8f4c();
    return uVar1;
  }
  if (param_1 == 8000) {
    if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8dd4 + 'h'));
    uVar1 = FUN_000b8f4c();
    return uVar1;
  }
  if (param_1 < 0x1f41) {
    if (param_1 == DAT_000b89e8) {
      if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8dbc + -0x4c));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 <= DAT_000b89e8) {
      if (param_1 == DAT_000b89ec) {
        if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8d9c + -0x3c));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 <= DAT_000b89ec) {
        if (param_1 == DAT_000b89f0) {
          if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
            uVar1 = FUN_000b8f4c();
            return uVar1;
          }
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8db8 + -0x6a));
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        if (param_1 != 0x1400) {
          FUN_000b8f4c();
        }
        if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8d84 + '\x10'));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 == DAT_000b89f4) {
        if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8da0 + -0x1e));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 != DAT_000b89f8) {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,SUB41(DAT_000b8da4,0));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 == DAT_000b89fc) {
      if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f6c + 'j'));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 <= DAT_000b89fc) {
      if (param_1 == DAT_000b8a00) {
        if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8dc0 + -0x2e));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 != DAT_000b8a04) {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f68 + 'L'));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 == DAT_000b8a08) {
      if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8d90 + 'j'));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 != DAT_000b8a0c) {
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (*(char *)(**(int **)(iVar3 + DAT_000b8d6c) + 1) == '\0') {
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8d94 + -0x78));
    uVar1 = FUN_000b8f4c();
    return uVar1;
  }
  if (param_1 == DAT_000b8a10) {
    if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) != '\0') {
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f74 + -0x5e));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
  }
  else if (DAT_000b8a10 < param_1) {
    if (param_1 == DAT_000b8a28) {
      if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) != '\0') {
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f78 + -0x42));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
    }
    else if (DAT_000b8a28 < param_1) {
      if (param_1 == DAT_000b8a34) {
        if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) != '\0') {
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f84 + '\x12'));
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
      }
      else {
        if (param_1 != DAT_000b8a38) {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) != '\0') {
          pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f88 + '.'));
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
      }
    }
    else if (param_1 == DAT_000b8a2c) {
      if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) != '\0') {
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f8c + 'J'));
      }
    }
    else {
      if (param_1 != DAT_000b8a30) {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) != '\0') {
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f7c + -0x26));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
    }
  }
  else {
    if (param_1 == DAT_000b8a14) {
      if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f64 + '.'));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 <= DAT_000b8a14) {
      if (param_1 == DAT_000b8a18) {
        if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) == '\0') {
          uVar1 = FUN_000b8f4c();
          return uVar1;
        }
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f5c + -0xe));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (param_1 != DAT_000b8a1c) {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) == '\0') {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f60 + '\x10'));
      uVar1 = FUN_000b8f4c();
      return uVar1;
    }
    if (param_1 == DAT_000b8a20) {
      if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) != '\0') {
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f80 + -10));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
    }
    else {
      if (param_1 != DAT_000b8a24) {
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
      if (*(char *)(**(int **)(iVar3 + DAT_000b8f58) + 1) != '\0') {
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000b8f70 + -0x7a));
        uVar1 = FUN_000b8f4c();
        return uVar1;
      }
    }
  }
  *piVar4 = *piVar4 + 1;
  return 1;
}


