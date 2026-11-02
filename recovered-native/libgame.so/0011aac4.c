/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011aac4  Symbol: Sprite_Touch3 */

/* Sprite_Touch3(cocos2d::CCNode*, cocos2d::CCPoint, float, float) */

bool Sprite_Touch3(CCNode *param_1,CCPoint param_2,float param_3,float param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 in_stack_00000000;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar5 = __subsf3(*(undefined4 *)(*(int *)(DAT_0011abc4 + 0x11aad2) + 4),in_r2,in_r2,
                   *(int *)(DAT_0011abc4 + 0x11aad2),param_2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  puVar1 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
  uVar4 = *puVar1;
  puVar1 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
  uVar2 = __mulsf3(*puVar1,0x3f000000);
  uVar2 = __subsf3(uVar4,uVar2);
  uVar2 = __subsf3(uVar2,in_r3);
  iVar3 = __aeabi_fcmplt(uVar2,local_20);
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
    uVar4 = *puVar1;
    puVar1 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar2 = __mulsf3(*puVar1,0x3f000000);
    uVar2 = __addsf3(uVar4,uVar2);
    uVar2 = __addsf3(uVar2,in_r3);
    iVar3 = __aeabi_fcmpgt(uVar2,local_20);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar4 = *(undefined4 *)(iVar3 + 4);
      iVar3 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
      uVar2 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
      uVar2 = __subsf3(uVar4,uVar2);
      uVar2 = __subsf3(uVar2,in_stack_00000000);
      iVar3 = __aeabi_fcmplt(uVar2,local_1c);
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
        uVar4 = *(undefined4 *)(iVar3 + 4);
        iVar3 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
        uVar2 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
        uVar2 = __addsf3(uVar4,uVar2);
        uVar2 = __addsf3(uVar2,in_stack_00000000);
        iVar3 = __aeabi_fcmpgt(uVar2,local_1c);
        return iVar3 != 0;
      }
    }
  }
  return false;
}


