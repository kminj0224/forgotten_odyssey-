/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011baac  Symbol: KG_View_Rect */

/* KG_View_Rect(cocos2d::CCPoint, cocos2d::CCSprite*) */

undefined8 KG_View_Rect(CCPoint param_1,CCSprite *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_r2;
  code *pcVar4;
  
  puVar1 = (undefined4 *)(**(code **)(*in_r2 + 0x38))(in_r2);
  iVar2 = __subsf3(param_1,DAT_0011bb38);
  iVar2 = __aeabi_fcmplt(iVar2 + -0x80000000,*puVar1);
  if (iVar2 == 0) {
LAB_0011bb28:
    iVar2 = (**(code **)(*in_r2 + 0x68))(in_r2);
    if (iVar2 == 0) goto LAB_0011bb34;
    uVar3 = 0;
    pcVar4 = *(code **)(*in_r2 + 0x6c);
  }
  else {
    uVar3 = __subsf3(param_1,DAT_0011bb3c);
    uVar3 = __subsf3(**(undefined4 **)(DAT_0011bb40 + 0x11bae8),uVar3);
    puVar1 = (undefined4 *)(**(code **)(*in_r2 + 0x38))(in_r2);
    iVar2 = __aeabi_fcmpgt(uVar3,*puVar1);
    if (iVar2 == 0) goto LAB_0011bb28;
    iVar2 = (**(code **)(*in_r2 + 0x68))(in_r2);
    if (iVar2 != 0) goto LAB_0011bb34;
    uVar3 = 1;
    pcVar4 = *(code **)(*in_r2 + 0x6c);
  }
  (*pcVar4)(in_r2,uVar3);
LAB_0011bb34:
  return CONCAT44(param_2,param_1);
}


