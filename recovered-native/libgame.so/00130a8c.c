/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00130a8c  Symbol: ccTouchesEnded */

/* Story_Layer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Story_Layer::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float extraout_s2;
  float extraout_s3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = cocos2d::CCSet::begin((CCSet *)param_2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48);
  local_48 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18);
  puVar4 = *(undefined4 **)(DAT_00130c30 + 0x130aac);
  local_44 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x1c);
  local_30 = local_48;
  local_2c = local_44;
  uVar2 = __divsf3(*puVar4,DAT_00130c34);
  __divsf3(local_48,uVar2);
  uVar2 = __divsf3(puVar4[1],DAT_00130c38);
  uVar6 = __divsf3(local_44,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  local_48 = local_40;
  local_44 = local_3c;
  uVar6 = __subsf3(*(undefined4 *)(*(int *)(DAT_00130c3c + 0x130af2) + 4),local_3c);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  local_48 = local_38;
  local_44 = local_34;
  puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x11c) + 0x38))();
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x11c) + 0x7c))();
  uVar2 = __mulsf3(*puVar4,0x3f000000);
  __subsf3(uVar5,uVar2);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x38))();
  uVar5 = *(undefined4 *)(iVar1 + 4);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x7c))();
  uVar2 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
  __subsf3(uVar5,uVar2);
  puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x11c) + 0x38))();
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x11c) + 0x7c))();
  uVar2 = __mulsf3(*puVar4,0x3f000000);
  __addsf3(uVar5,uVar2);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x38))();
  uVar5 = *(undefined4 *)(iVar1 + 4);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x7c))();
  uVar2 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
  uVar6 = __addsf3(uVar5,uVar2);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2,
             extraout_s3);
  uVar2 = local_48;
  uVar5 = __subsf3(local_28,DAT_00130c40);
  iVar1 = __aeabi_fcmplt(uVar5,uVar2);
  uVar5 = local_44;
  if (iVar1 != 0) {
    uVar3 = __subsf3(local_24,DAT_00130c40);
    iVar1 = __aeabi_fcmplt(uVar3,uVar5);
    if (iVar1 != 0) {
      uVar3 = __addsf3(local_20,DAT_00130c40);
      iVar1 = __aeabi_fcmpgt(uVar3,uVar2);
      if (iVar1 != 0) {
        uVar2 = __addsf3(local_1c,DAT_00130c40);
        iVar1 = __aeabi_fcmpgt(uVar2,uVar5);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCLog((char *)(DAT_00130c44 + 0x130c04));
        }
      }
    }
  }
  Story_Call((Story_Layer *)param_1);
  return;
}


