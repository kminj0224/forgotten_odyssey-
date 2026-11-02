/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a7138  Symbol: jpeg_calc_jpeg_dimensions */

void jpeg_calc_jpeg_dimensions(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = param_1[7];
  if ((iVar2 >> 0x18 == 0) && (param_1[8] >> 0x18 == 0)) {
    iVar1 = param_1[0x5e];
    uVar3 = param_1[0xe];
    uVar4 = iVar1 * param_1[0xf];
    if (uVar4 <= uVar3) {
LAB_001a7246:
      param_1[0x10] = iVar1 * iVar2;
      param_1[0x45] = 1;
      param_1[0x11] = param_1[8] * iVar1;
      param_1[0x46] = 1;
      return;
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x2a;
    *(undefined4 *)(*param_1 + 0x18) = DAT_001a74b0;
    (**(code **)*param_1)(param_1);
    iVar1 = param_1[0x5e];
    uVar3 = param_1[0xe];
    iVar2 = param_1[7];
    uVar4 = iVar1 * param_1[0xf];
    if (uVar4 <= uVar3) goto LAB_001a7246;
  }
  if (uVar3 * 2 < uVar4) {
    if (uVar3 * 3 < uVar4) {
      if (uVar3 * 4 < uVar4) {
        if (uVar3 * 5 < uVar4) {
          if (uVar3 * 6 < uVar4) {
            if (uVar3 * 7 < uVar4) {
              if (uVar3 * 8 < uVar4) {
                if (uVar3 * 9 < uVar4) {
                  if (uVar3 * 10 < uVar4) {
                    if (uVar3 * 0xb < uVar4) {
                      if (uVar3 * 0xc < uVar4) {
                        if (uVar3 * 0xd < uVar4) {
                          if (uVar3 * 0xe < uVar4) {
                            if (uVar3 * 0xf < uVar4) {
                              iVar2 = jdiv_round_up(iVar2 * iVar1,0x10);
                              param_1[0x10] = iVar2;
                              iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],0x10);
                              param_1[0x45] = 0x10;
                              param_1[0x11] = iVar2;
                              param_1[0x46] = 0x10;
                            }
                            else {
                              iVar2 = jdiv_round_up(iVar2 * iVar1,0xf);
                              param_1[0x10] = iVar2;
                              iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],0xf);
                              param_1[0x45] = 0xf;
                              param_1[0x11] = iVar2;
                              param_1[0x46] = 0xf;
                            }
                          }
                          else {
                            iVar2 = jdiv_round_up(iVar2 * iVar1,0xe);
                            param_1[0x10] = iVar2;
                            iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],0xe);
                            param_1[0x45] = 0xe;
                            param_1[0x11] = iVar2;
                            param_1[0x46] = 0xe;
                          }
                        }
                        else {
                          iVar2 = jdiv_round_up(iVar2 * iVar1,0xd);
                          param_1[0x10] = iVar2;
                          iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],0xd);
                          param_1[0x45] = 0xd;
                          param_1[0x11] = iVar2;
                          param_1[0x46] = 0xd;
                        }
                      }
                      else {
                        iVar2 = jdiv_round_up(iVar2 * iVar1,0xc);
                        param_1[0x10] = iVar2;
                        iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],0xc);
                        param_1[0x45] = 0xc;
                        param_1[0x11] = iVar2;
                        param_1[0x46] = 0xc;
                      }
                    }
                    else {
                      iVar2 = jdiv_round_up(iVar2 * iVar1,0xb);
                      param_1[0x10] = iVar2;
                      iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],0xb);
                      param_1[0x45] = 0xb;
                      param_1[0x11] = iVar2;
                      param_1[0x46] = 0xb;
                    }
                  }
                  else {
                    iVar2 = jdiv_round_up(iVar2 * iVar1,10);
                    param_1[0x10] = iVar2;
                    iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],10);
                    param_1[0x45] = 10;
                    param_1[0x11] = iVar2;
                    param_1[0x46] = 10;
                  }
                }
                else {
                  iVar2 = jdiv_round_up(iVar2 * iVar1,9);
                  param_1[0x10] = iVar2;
                  iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],9);
                  param_1[0x45] = 9;
                  param_1[0x11] = iVar2;
                  param_1[0x46] = 9;
                }
              }
              else {
                iVar2 = jdiv_round_up(iVar2 * iVar1,8);
                param_1[0x10] = iVar2;
                iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],8);
                param_1[0x45] = 8;
                param_1[0x11] = iVar2;
                param_1[0x46] = 8;
              }
            }
            else {
              iVar2 = jdiv_round_up(iVar2 * iVar1,7);
              param_1[0x10] = iVar2;
              iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],7);
              param_1[0x45] = 7;
              param_1[0x11] = iVar2;
              param_1[0x46] = 7;
            }
          }
          else {
            iVar2 = jdiv_round_up(iVar2 * iVar1,6);
            param_1[0x10] = iVar2;
            iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],6);
            param_1[0x45] = 6;
            param_1[0x11] = iVar2;
            param_1[0x46] = 6;
          }
        }
        else {
          iVar2 = jdiv_round_up(iVar2 * iVar1,5);
          param_1[0x10] = iVar2;
          iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],5);
          param_1[0x45] = 5;
          param_1[0x11] = iVar2;
          param_1[0x46] = 5;
        }
      }
      else {
        iVar2 = jdiv_round_up(iVar2 * iVar1,4);
        param_1[0x10] = iVar2;
        iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],4);
        param_1[0x45] = 4;
        param_1[0x11] = iVar2;
        param_1[0x46] = 4;
      }
    }
    else {
      iVar2 = jdiv_round_up(iVar2 * iVar1,3);
      param_1[0x10] = iVar2;
      iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],3);
      param_1[0x45] = 3;
      param_1[0x11] = iVar2;
      param_1[0x46] = 3;
    }
  }
  else {
    iVar2 = jdiv_round_up(iVar2 * iVar1,2);
    param_1[0x10] = iVar2;
    iVar2 = jdiv_round_up(param_1[8] * param_1[0x5e],2);
    param_1[0x45] = 2;
    param_1[0x11] = iVar2;
    param_1[0x46] = 2;
  }
  return;
}


