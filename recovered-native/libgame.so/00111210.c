/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00111210  Symbol: Move */

/* Move(cocos2d::CCLayer*, _Unit_Stage*) */

void Move(CCLayer *param_1,_Unit_Stage *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  CCPoint aCStack_20 [12];
  
  piVar6 = *(int **)(param_2 + 4);
  iVar4 = piVar6[9];
  iVar7 = *piVar6;
  if (*(char *)(piVar6 + 0x24) == '\0') {
    if (iVar7 == 0) {
      uVar8 = __extendsfdf2(piVar6[5]);
      uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_001113f0,DAT_001113f4);
      uVar9 = __floatsidf(*(short *)((*(char *)(**(int **)(DAT_00111410 + 0x11125c) +
                                                **(int **)(DAT_00111418 + 0x11126c) * 0x6c +
                                               DAT_0011141c) + 0x37) * 2 +
                                    *(int *)(DAT_00111414 + 0x111268)) * 10 + 100);
      uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_00111400,DAT_00111404);
      __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,(int)((ulonglong)uVar9 >> 0x20)
              );
      uVar1 = __truncdfsf2();
      goto LAB_00111304;
    }
    if ((*(int *)(**(int **)(DAT_00111420 + 0x1112ae) + 0x40) == 0) ||
       (piVar6[1] == *(int *)(**(int **)(DAT_00111420 + 0x1112ae) + 0x2c))) {
      uVar1 = 0;
    }
    else {
      uVar8 = __extendsfdf2(piVar6[5]);
      __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_00111408,DAT_0011140c);
      uVar1 = __truncdfsf2();
    }
    uVar8 = __extendsfdf2(piVar6[5]);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_001113f0,DAT_001113f4);
    uVar9 = __extendsfdf2(uVar1);
    __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  }
  else {
    uVar8 = __extendsfdf2(piVar6[5]);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_001113f0,DAT_001113f4);
    __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_001113f8,DAT_001113fc);
  }
  uVar1 = __truncdfsf2();
  if (iVar7 == 2) {
    return;
  }
LAB_00111304:
  iVar4 = __aeabi_fcmple(iVar4,0);
  if (iVar4 == 0) {
    if (iVar7 == 0) {
      if (((*(char *)((int)piVar6 + 0xd) == '\0') && (*(char *)(piVar6 + 0xb) == '\0')) &&
         (piVar6[0x19] == 1)) {
        puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
        uVar3 = __addsf3(uVar1,*puVar2);
        iVar4 = __aeabi_fcmplt(uVar3,DAT_00111424);
        if (iVar4 != 0) {
          puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
          __addsf3(uVar1,*puVar2);
          uVar8 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
          cocos2d::CCNode::setPosition((float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
        }
      }
    }
    else if (((iVar7 == 1) && (*(char *)((int)piVar6 + 0xd) == '\0')) &&
            (*(char *)(piVar6 + 0xb) == '\0')) {
      if (*(char *)(piVar6 + 0x21) == '\0') {
        if (piVar6[0x19] == 1) {
          puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
          __subsf3(*puVar2,uVar1);
          uVar8 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
          cocos2d::CCNode::setPosition((float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
          puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
          iVar4 = __aeabi_fcmplt(*puVar2,0);
          if (iVar4 != 0) {
            pcVar5 = *(code **)(*(int *)param_1 + 0x3c);
            uVar8 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
            cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
            (*pcVar5)(param_1,aCStack_20);
          }
        }
      }
      else {
        ani_Base_ani(param_1);
      }
    }
  }
  return;
}


