/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00150d2c  Symbol: getUIImageFromBuffer */

/* cocos2d::CCRenderTexture::getUIImageFromBuffer(cocos2d::CCImage*, int, int, int, int) */

void * __thiscall
cocos2d::CCRenderTexture::getUIImageFromBuffer
          (CCRenderTexture *this,CCImage *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  int *piVar9;
  void *pvVar10;
  void *local_44;
  uint local_40;
  int local_1c [2];
  
  if (param_1 == (CCImage *)0x0) {
    pvVar10 = (void *)0x0;
  }
  else {
    piVar9 = *(int **)(this + 0x108);
    if (piVar9 == (int *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      puVar1 = (undefined4 *)(**(code **)(*piVar9 + 0x24))(piVar9);
      uVar2 = __fixsfsi(*puVar1);
      if (((((((param_2 >> 0x1f) - ((int)uVar2 >> 0x1f)) + (uint)(uVar2 <= (uint)param_2) & 0xff) ==
             0) && (-1 < param_2)) &&
          (uVar3 = __fixsfsi(puVar1[1]),
          (((param_3 >> 0x1f) - ((int)uVar3 >> 0x1f)) + (uint)(uVar3 <= (uint)param_3) & 0xff) == 0)
          ) && (((-1 < param_3 && (-1 < param_5)) && (-1 < param_4)))) {
        if ((param_5 == 0) || (param_4 != 0)) {
          if ((param_5 != 0) || (pvVar10 = (void *)0x0, param_4 == 0)) {
            local_40 = param_4;
            if (param_4 == 0) {
              local_40 = uVar2;
            }
            if (param_5 == 0) {
              param_5 = uVar3;
            }
            if ((int)uVar2 < (int)(param_2 + local_40)) {
              local_40 = uVar2 - param_2;
            }
            if ((int)uVar3 < param_3 + param_5) {
              param_5 = uVar3 - param_3;
            }
            uVar8 = local_40 * param_5 * 4;
            pvVar4 = operator_new__(uVar8);
            pvVar10 = pvVar4;
            if (pvVar4 != (void *)0x0) {
              local_1c[0] = 0;
              glGetIntegerv(DAT_00150ef8,local_1c);
              iVar5 = ccNextPOT(uVar2);
              iVar6 = ccNextPOT(uVar3);
              if ((((iVar6 == 0) || (iVar5 == 0)) || (local_1c[0] < iVar5)) || (local_1c[0] < iVar6)
                 ) {
                pvVar10 = (void *)0x0;
                pvVar7 = pvVar10;
              }
              else {
                pvVar7 = operator_new__(iVar5 * iVar6 * 4);
                pvVar10 = pvVar7;
                if (pvVar7 != (void *)0x0) {
                  begin(this);
                  glPixelStorei(DAT_00150efc,1);
                  glReadPixels(0,0,iVar5,iVar6,DAT_00150f00,DAT_00150f04,pvVar7);
                  end(this,iVar5 == 0);
                  pvVar10 = (void *)((int)pvVar7 +
                                    iVar5 * (param_3 + param_5 + -1) * 4 + param_2 * 4);
                  local_44 = pvVar4;
                  for (iVar6 = 0; iVar6 < param_5; iVar6 = iVar6 + 1) {
                    memcpy(local_44,pvVar10,local_40 * 4);
                    local_44 = (void *)((int)local_44 + local_40 * 4);
                    pvVar10 = (void *)((int)pvVar10 + iVar5 * -4);
                  }
                  pvVar10 = (void *)CCImage::initWithImageData
                                              (param_1,pvVar4,uVar8,2,local_40,param_5,8);
                }
              }
              operator_delete__(pvVar4);
              if (pvVar7 != (void *)0x0) {
                operator_delete__(pvVar7);
              }
            }
          }
        }
        else {
          pvVar10 = (void *)0x0;
        }
      }
      else {
        pvVar10 = (void *)0x0;
      }
    }
  }
  return pvVar10;
}


