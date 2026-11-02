/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164a20  Symbol: CCTMXObjectGroup */

/* cocos2d::CCTMXObjectGroup::CCTMXObjectGroup() */

undefined8 __thiscall cocos2d::CCTMXObjectGroup::CCTMXObjectGroup(CCTMXObjectGroup *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *__s;
  undefined auStack_1c [8];
  
  CCObject::CCObject((CCObject *)this);
  iVar2 = DAT_00164aa8 + 0x164a36;
  *(int *)this = *(int *)(DAT_00164aa4 + 0x164a32) + 8;
  uVar3 = *(undefined4 *)(DAT_00164aac + 0x164a46);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(DAT_00164aac + 0x164a42);
  *(undefined4 *)(this + 0x18) = uVar3;
  FUN_001eed40(this + 0x24,iVar2,auStack_1c);
  piVar1 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)piVar1);
  iVar2 = DAT_00164ab0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  iVar2 = *(int *)(iVar2 + 0x164a64);
  piVar1[7] = 0;
  *piVar1 = iVar2 + 8;
  *(int **)(this + 0x20) = piVar1;
  piVar1 = (int *)operator_new(0x34);
  CCObject::CCObject((CCObject *)piVar1);
  __s = piVar1 + 6;
  *piVar1 = *(int *)(DAT_00164ab4 + 0x164a82) + 8;
  memset(__s,0,0x10);
  piVar1[10] = 0;
  piVar1[0xc] = 0;
  piVar1[8] = (int)__s;
  piVar1[9] = (int)__s;
  *(CCObject *)(piVar1 + 0xb) = (CCObject)0x0;
  *(int **)(this + 0x1c) = piVar1;
  return CONCAT44(this,this);
}


