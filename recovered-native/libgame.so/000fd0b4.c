/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fd0b4  Symbol: Lethal */

/* Hero8::Lethal() */

Hero8 * __thiscall Hero8::Lethal(Hero8 *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  CCNode **ppCVar9;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar10;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  ppCVar9 = *(CCNode ***)(DAT_000fd1f0 + 0xfd0c0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar9,1);
  iVar2 = (**(code **)(*piVar1 + 0xa8))();
  this[0x118] = (Hero8)0x0;
  uVar8 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x80);
  iVar3 = __aeabi_fcmpeq(uVar8,0x3f800000);
  if (iVar3 == 0) {
    iVar3 = __aeabi_fcmpeq(uVar8,0);
    if (iVar3 == 0) {
      piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar9,1);
      puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
      uVar8 = __addsf3(*puVar5,DAT_000fd204);
      uVar6 = __addsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x7c),DAT_000fd214);
      uVar6 = __addsf3(uVar6,DAT_000fd218);
      uVar10 = __subsf3(uVar8,uVar6);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      pcVar4 = (char *)(DAT_000fd21c + 0xfd1a2);
      pcVar7 = (char *)(DAT_000fd220 + 0xfd1a4);
      local_2c = local_1c;
      local_30 = local_20;
    }
    else {
      piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar9,1);
      puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
      uVar8 = __addsf3(*puVar5,DAT_000fd204);
      uVar6 = __addsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x7c),DAT_000fd208);
      uVar10 = __subsf3(uVar8,uVar6);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_28,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      pcVar4 = (char *)(DAT_000fd20c + 0xfd156);
      pcVar7 = (char *)(DAT_000fd210 + 0xfd158);
      local_2c = local_24;
      local_30 = local_28;
    }
  }
  else {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,extraout_s0,extraout_s1);
    pcVar4 = (char *)(DAT_000fd1fc + 0xfd106);
    pcVar7 = (char *)(DAT_000fd200 + 0xfd108);
  }
  iVar2 = DAT_000fd224;
  vDrawScript_Unit(pcVar4,pcVar7,(char *)0x0,(CCNode *)this,local_30,local_2c,1,2,true,true);
  vScript_Unit((char *)(iVar2 + 0xfd1c4),(char *)(DAT_000fd228 + 0xfd1ce),(CCNode *)this,2,1);
  vScript_Unit((char *)(iVar2 + 0xfd1c4),(char *)(DAT_000fd22c + 0xfd1dc),(CCNode *)this,2,2);
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return this;
}


