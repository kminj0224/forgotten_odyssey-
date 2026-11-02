/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e3340  Symbol: Self_Loding */

/* Market_Store::Self_Loding() */

void Market_Store::Self_Loding(void)

{
  int *in_r0;
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  float in_s0;
  float in_s1;
  undefined8 uVar6;
  _ccColor4B local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  CCPoint aCStack_20 [12];
  
  local_21 = 0x7f;
  local_24 = (_ccColor4B)0x0;
  local_23 = 0;
  local_22 = 0;
  piVar1 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight(&local_24,in_s0,in_s1);
  (**(code **)(*in_r0 + 0xcc))(in_r0,piVar1,1000);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000e33d8 + 0xe337c));
  pcVar5 = *(code **)(*piVar2 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  __mulsf3(*puVar3,0x3f000000);
  iVar4 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar6 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  (*pcVar5)(piVar2,aCStack_20);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,0,0);
  return;
}


