/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164cac  Symbol: tilesetForLayer */

/* cocos2d::CCTMXTiledMap::tilesetForLayer(cocos2d::CCTMXLayerInfo*, cocos2d::CCTMXMapInfo*) */

int __thiscall
cocos2d::CCTMXTiledMap::tilesetForLayer
          (CCTMXTiledMap *this,CCTMXLayerInfo *param_1,CCTMXMapInfo *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int local_38;
  
  uVar8 = *(undefined4 *)(param_1 + 0x1c);
  uVar9 = *(undefined4 *)(param_1 + 0x20);
  iVar1 = (**(code **)(*(int *)param_2 + 0x34))(param_2);
  if (iVar1 != 0) {
    iVar11 = *(int *)(iVar1 + 0x18);
    iVar2 = *(int *)(iVar1 + 0x14);
    iVar1 = iVar11 - iVar2 >> 2;
    if (iVar1 != 0) {
      for (; iVar11 != iVar2; iVar11 = iVar11 + -4) {
        iVar1 = *(int *)(iVar11 + -4);
        local_38 = 0;
        if (iVar1 != 0) {
          while( true ) {
            uVar6 = __floatunsisf(local_38);
            iVar7 = __aeabi_fcmplt(uVar6,uVar9);
            if (iVar7 == 0) break;
            iVar7 = 0;
            while( true ) {
              uVar4 = __floatunsisf(iVar7);
              iVar5 = __aeabi_fcmplt(uVar4,uVar8);
              if (iVar5 == 0) break;
              uVar3 = __mulsf3(uVar8,uVar6);
              __addsf3(uVar4,uVar3);
              iVar5 = __fixunssfsi();
              uVar10 = *(uint *)(iVar5 * 4 + *(int *)(param_1 + 0x24));
              if ((uVar10 != 0) && (*(uint *)(iVar1 + 0x18) <= uVar10)) {
                return iVar1;
              }
              iVar7 = iVar7 + 1;
            }
            local_38 = local_38 + 1;
          }
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}


