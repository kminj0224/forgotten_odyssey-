/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00112110  Symbol: Set_Item_Inventory */

/* Set_Item_Inventory(int, int) */

void Set_Item_Inventory(int param_1,int param_2)

{
  uint uVar1;
  CCObject *this;
  CCArray *this_00;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  CCFiniteTimeAction *pCVar10;
  int iVar11;
  int **ppiVar12;
  code *pcVar13;
  int iVar14;
  float extraout_s0;
  float extraout_s0_00;
  float fVar15;
  float extraout_s1;
  undefined8 uVar16;
  uint local_94;
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  _func_void_CCNode_ptr_void_ptr *local_58;
  undefined4 local_54;
  char acStack_50 [52];
  int local_1c;
  
  iVar14 = DAT_001123f4 + 0x11211c;
  local_1c = **(int **)(iVar14 + DAT_001123f8);
  if (param_2 == 0) {
    if (local_1c != **(int **)(iVar14 + DAT_001123f8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar1 = Random(0,100);
  local_94 = 3;
  if ((4 < (int)uVar1) && (local_94 = 2, 0x13 < (int)uVar1)) {
    local_94 = (uint)(uVar1 < 0x32) - ((int)uVar1 >> 0x1f);
  }
  local_94 = local_94 & -(uint)(param_2 != 0xa9);
  this = (CCObject *)cocos2d::CCArray::arrayWithCapacity(10);
  ppiVar12 = *(int ***)(iVar14 + DAT_001123fc);
  this_00 = (CCArray *)(**(code **)(**ppiVar12 + 0x58))();
  for (uVar1 = 0; uVar2 = cocos2d::CCArray::count(this_00), uVar1 < uVar2; uVar1 = uVar1 + 1) {
    piVar6 = (int *)cocos2d::CCArray::objectAtIndex(this_00,uVar1);
    iVar3 = (**(code **)(*piVar6 + 0xa0))();
    if (iVar3 == 5) {
      cocos2d::CCArray::addObject(this);
    }
  }
  iVar3 = cocos2d::CCArray::count((CCArray *)this);
  if ((iVar3 != 0) && (iVar3 = cocos2d::CCArray::count((CCArray *)this), 0 < iVar3)) {
    piVar6 = (int *)cocos2d::CCArray::objectAtIndex((CCArray *)this,iVar3 - 1);
    pcVar13 = *(code **)(*piVar6 + 0x3c);
    puVar7 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
    uVar8 = __addsf3(*puVar7,DAT_00112400);
    uVar4 = __floatsisf(iVar3 + 1);
    uVar8 = __mulsf3(uVar8,uVar4);
    uVar16 = __subsf3(DAT_00112404,uVar8);
    cocos2d::CCPoint::CCPoint(aCStack_78,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    (*pcVar13)(piVar6,aCStack_78);
    iVar14 = DAT_0011240c;
    puVar7 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
    uVar8 = __subsf3(*puVar7,DAT_00112400);
    uVar4 = __floatsisf(iVar3);
    uVar8 = __mulsf3(uVar8,uVar4);
    __subsf3(DAT_00112404,uVar8);
    uVar16 = __extendsfdf2();
    uVar8 = (undefined4)((ulonglong)uVar16 >> 0x20);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(iVar14 + 0x112236),uVar8,(int)uVar16,uVar8,iVar3);
  }
  cocos2d::CCObject::release(this);
  if (local_94 == 0) {
    pcVar5 = (char *)(DAT_00112410 + 0x112258);
  }
  else if (local_94 == 1) {
    pcVar5 = (char *)(DAT_00112414 + 0x112264);
  }
  else if (local_94 == 2) {
    pcVar5 = (char *)(DAT_00112418 + 0x112270);
  }
  else {
    pcVar5 = (char *)(DAT_0011241c + 0x112276);
  }
  piVar6 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(pcVar5);
  pcVar13 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_70,extraout_s0,extraout_s1);
  (*pcVar13)(piVar6,aCStack_70);
  pcVar13 = *(code **)(*piVar6 + 0x3c);
  puVar7 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
  uVar8 = __subsf3(DAT_00112404,*puVar7);
  uVar16 = __subsf3(uVar8,DAT_00112400);
  cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar13)(piVar6,aCStack_68);
  piVar9 = *ppiVar12;
  (**(code **)(*piVar9 + 0xcc))(piVar9,piVar6,5,5);
  memset(acStack_50,0,0x32);
  iVar3 = *(int *)(*(int *)(iVar14 + DAT_00112420) + param_2 * 0xc + 4);
  fVar15 = extraout_s0_00;
  if (iVar3 != 0) {
    if (param_2 == 0xa9) {
      pcVar5 = (char *)(DAT_00112424 + 0x1122f4);
      iVar11 = DAT_00112428 + 0x1122f6;
      iVar3 = DAT_0011242c + 0x1122f8;
    }
    else {
      pcVar5 = (char *)(DAT_00112430 + 0x112300);
      iVar11 = DAT_00112434 + 0x112302;
    }
    sprintf(acStack_50,pcVar5,iVar11,iVar3);
    piVar9 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_50);
    pcVar13 = *(code **)(*piVar9 + 0x3c);
    puVar7 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
    __mulsf3(*puVar7,0x3f000000);
    iVar3 = (**(code **)(*piVar6 + 0x7c))(piVar6);
    uVar16 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    (*pcVar13)(piVar9,aCStack_60);
    fVar15 = (float)(**(code **)(*piVar6 + 0xcc))(piVar6,piVar9,0,param_2);
  }
  pCVar10 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(fVar15);
  local_58 = *(_func_void_CCNode_ptr_void_ptr **)(iVar14 + DAT_0011243c);
  local_54 = 0;
  uVar8 = cocos2d::CCCallFuncND::actionWithTarget((CCObject *)piVar6,local_58,(void *)0x0);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar10,uVar8,0);
}


