/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013a8f4  Symbol: update */

/* cocos2d::CCLens3D::update(float) */

float cocos2d::CCLens3D::update(float param_1)

{
  CCGrid3DAction *in_r0;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float __x;
  float __x_00;
  undefined8 uVar7;
  CCPoint local_58;
  undefined4 local_54;
  CCPoint local_4c;
  undefined4 local_48;
  CCPoint aCStack_44 [2];
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  CCGrid3DAction local_24 [8];
  undefined4 local_1c;
  
  iVar5 = 0;
  if (in_r0[0x4c] != (CCGrid3DAction)0x0) {
    for (; iVar4 = 0, iVar5 <= *(int *)(in_r0 + 0x2c); iVar5 = iVar5 + 1) {
      for (; iVar4 <= *(int *)(in_r0 + 0x30); iVar4 = iVar4 + 1) {
        local_3c = iVar5;
        local_38 = iVar4;
        uVar7 = CCGrid3DAction::originalVertex(local_24,(_ccGridSize *)in_r0);
        CCPoint::CCPoint((CCPoint *)&local_34,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
        __subsf3(*(undefined4 *)(in_r0 + 0x44),local_34);
        uVar7 = __subsf3(*(undefined4 *)(in_r0 + 0x48),local_30);
        CCPoint::CCPoint((CCPoint *)&local_4c,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
        uVar1 = ccpLength(&local_4c);
        uVar6 = *(undefined4 *)(in_r0 + 0x3c);
        iVar2 = __aeabi_fcmplt(uVar1,uVar6);
        if (iVar2 != 0) {
          uVar1 = __subsf3(uVar6,uVar1);
          uVar1 = __divsf3(uVar1,uVar6);
          __aeabi_fcmpeq(uVar1,0);
          logf(__x);
          uVar1 = __mulsf3();
          expf(__x_00);
          uVar3 = *(undefined4 *)(in_r0 + 0x3c);
          uVar6 = ccpLength(&local_4c);
          iVar2 = __aeabi_fcmpgt(uVar6,0);
          if (iVar2 != 0) {
            uVar1 = __mulsf3(uVar1,uVar3);
            ccpNormalize((cocos2d *)&local_58,&local_4c);
            local_4c = local_58;
            local_48 = local_54;
            __mulsf3(uVar1,local_58);
            uVar7 = __mulsf3(uVar1,local_48);
            CCPoint::CCPoint((CCPoint *)aCStack_44,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
            uVar1 = local_1c;
            uVar6 = ccpLength(aCStack_44);
            uVar6 = __mulsf3(uVar6,*(undefined4 *)(in_r0 + 0x40));
            local_1c = __addsf3(uVar1,uVar6);
          }
        }
        local_2c = iVar5;
        local_28 = iVar4;
        param_1 = (float)CCGrid3DAction::setVertex
                                   (in_r0,(_ccGridSize *)&local_2c,(_ccVertex3F *)local_24);
      }
    }
    in_r0[0x4c] = (CCGrid3DAction)0x0;
  }
  return param_1;
}


