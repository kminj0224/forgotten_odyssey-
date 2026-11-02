/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a3e20  Symbol: FUN_001a3e20 */

void FUN_001a3e20(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char local_208 [500];
  int local_14;
  
  iVar4 = DAT_001a4058 + 0x1a3e2c;
  local_14 = **(int **)(iVar4 + DAT_001a405c);
  if (param_1 != 0) {
    iVar2 = FUN_001a3d90(param_1);
    if (iVar2 != 0) {
      param_1 = iVar2;
    }
    iVar2 = 0;
    iVar5 = **(int **)(iVar4 + DAT_001a4060);
    do {
      cVar1 = *(char *)(iVar5 + (*(byte *)(param_1 + iVar2) + 1) * 2);
      local_208[iVar2] = cVar1;
      if (cVar1 == '\0') break;
      iVar2 = iVar2 + 1;
    } while (iVar2 != DAT_001a4064);
    local_208[iVar2] = '\0';
    if (local_208[0] != '\0') {
      iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a4068));
      if ((iVar2 == 0) || (iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a406c)), iVar2 == 0)) {
        uVar3 = 1;
      }
      else {
        iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a4070));
        if ((iVar2 == 0) || (iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a4074)), iVar2 == 0))
        {
          uVar3 = 2;
        }
        else {
          iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a4078));
          if (((iVar2 == 0) ||
              (iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a407c)), iVar2 == 0)) ||
             (iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a4080)), iVar2 == 0)) {
            uVar3 = 9;
          }
          else {
            iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a4084));
            if (((iVar2 == 0) ||
                (iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a4088)), iVar2 == 0)) ||
               (iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a408c)), iVar2 == 0)) {
              uVar3 = 4;
            }
            else {
              iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a4090));
              if (((iVar2 == 0) ||
                  (iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a4094)), iVar2 == 0)) ||
                 (iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a4098)), iVar2 == 0)) {
                uVar3 = 10;
              }
              else {
                iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a409c));
                if (((iVar2 == 0) ||
                    (iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a40a0)), iVar2 == 0)) ||
                   (iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a40a4)), iVar2 == 0)) {
                  uVar3 = 0xb;
                }
                else {
                  iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a40a8));
                  if (iVar2 == 0) {
                    uVar3 = 0xc;
                  }
                  else {
                    iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a40ac));
                    if (iVar2 == 0) {
                      uVar3 = 0xd;
                    }
                    else {
                      iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a40b0));
                      if (iVar2 == 0) {
                        uVar3 = 0xe;
                      }
                      else {
                        iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a40b4));
                        if (iVar2 == 0) {
                          uVar3 = 0xf;
                        }
                        else {
                          iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a40b8));
                          if (iVar2 == 0) {
                            uVar3 = 0x10;
                          }
                          else {
                            iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a40bc));
                            if (iVar2 == 0) {
                              uVar3 = 0x11;
                            }
                            else {
                              iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a40c0));
                              if (iVar2 == 0) {
                                uVar3 = 0x12;
                              }
                              else {
                                iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a40c4));
                                if (iVar2 == 0) {
                                  uVar3 = 0x13;
                                }
                                else {
                                  iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a40c8));
                                  if (iVar2 == 0) {
                                    uVar3 = 0x14;
                                  }
                                  else {
                                    iVar2 = strcmp(local_208,(char *)(iVar4 + DAT_001a40cc));
                                    if (iVar2 == 0) {
                                      uVar3 = 0x15;
                                    }
                                    else {
                                      uVar3 = 0xffffffff;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_001a4042;
    }
  }
  uVar3 = 0;
LAB_001a4042:
  if (local_14 == **(int **)(iVar4 + DAT_001a405c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


