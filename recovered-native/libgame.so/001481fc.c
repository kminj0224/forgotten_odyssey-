/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001481fc  Symbol: createFontChars */

/* cocos2d::CCLabelBMFont::createFontChars() */

void __thiscall cocos2d::CCLabelBMFont::createFontChars(CCLabelBMFont *this)

{
  byte bVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  int *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  uint uVar9;
  ushort *puVar10;
  byte *pbVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  ushort *local_78;
  int local_6c;
  int local_64;
  int local_60;
  int local_5c;
  ushort *local_58;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  CCPoint aCStack_30 [8];
  CCRect local_28;
  undefined4 uStack_24;
  CCSize CStack_20;
  undefined4 local_1c;
  
  local_38 = *(undefined4 *)(DAT_00148524 + 0x148208);
  local_34 = *(undefined4 *)(DAT_00148524 + 0x14820c);
  pbVar11 = *(byte **)(this + 0x120);
  if (*(int *)(pbVar11 + -0xc) != 0) {
    iVar14 = 0;
    while( true ) {
      bVar1 = *pbVar11;
      if (bVar1 == 0) break;
      iVar14 = iVar14 + 1;
      pbVar11 = pbVar11 + *(byte *)(DAT_00148528 + 0x148228 + (uint)bVar1);
    }
    if (iVar14 != 0) {
      puVar2 = (ushort *)operator_new__((iVar14 + 1) * 2);
      puVar2[iVar14] = (ushort)bVar1;
      pbVar11 = *(byte **)(this + 0x120);
      iVar16 = DAT_0014852c + 0x148254;
      iVar15 = 0;
      local_78 = puVar2;
      do {
        uVar9 = (uint)*pbVar11;
        if ((int)(uVar9 << 0x18) < 0) {
          if ((uVar9 & 0xe0) == 0xc0) {
            iVar12 = 2;
            uVar3 = 0x1f;
            goto LAB_001482a4;
          }
          if ((uVar9 & 0xf0) == 0xe0) {
            iVar12 = 3;
            uVar3 = 0xf;
            goto LAB_001482a4;
          }
          if ((uVar9 & 0xf8) == 0xf0) {
            iVar12 = 4;
            uVar3 = 7;
            goto LAB_001482a4;
          }
          if ((uVar9 & 0xfc) == 0xf8) {
            iVar12 = 5;
            uVar3 = 3;
            goto LAB_001482a4;
          }
          if ((uVar9 & 0xfe) == 0xfc) {
            iVar12 = 6;
            uVar3 = 1;
            goto LAB_001482a4;
          }
LAB_001482ce:
          uVar8 = 0xffff;
        }
        else {
          iVar12 = 1;
          uVar3 = 0x7f;
LAB_001482a4:
          uVar9 = uVar9 & uVar3;
          for (iVar4 = 1; uVar8 = (ushort)uVar9, iVar4 < iVar12; iVar4 = iVar4 + 1) {
            if ((pbVar11[iVar4] & 0xc0) != 0x80) goto LAB_001482ce;
            uVar9 = uVar9 << 6 | pbVar11[iVar4] & 0x3f;
          }
        }
        iVar15 = iVar15 + 1;
        *local_78 = uVar8;
        local_78 = local_78 + 1;
        pbVar11 = pbVar11 + *(byte *)(iVar16 + (uint)*pbVar11);
      } while (iVar15 < iVar14);
      local_64 = 0;
      puVar10 = puVar2;
      while (uVar8 = *puVar10, puVar10 = puVar10 + 1, uVar8 != 0) {
        local_64 = local_64 + 1;
      }
      iVar14 = 1;
      puVar10 = puVar2;
      for (uVar9 = 0; uVar9 < local_64 - 1U; uVar9 = uVar9 + 1) {
        uVar8 = *puVar10;
        puVar10 = puVar10 + 1;
        iVar14 = iVar14 + (uint)(uVar8 == 10);
      }
      iVar15 = *(int *)(*(int *)(this + 0x124) + 0x18);
      local_60 = iVar15 * (iVar14 + -1);
      local_5c = 0;
      local_6c = 0;
      uVar9 = DAT_00148530;
      local_58 = puVar2;
      for (local_78 = (ushort *)0x0; local_78 != (ushort *)local_64;
          local_78 = (ushort *)((int)local_78 + 1)) {
        uVar3 = (uint)*local_58;
        if (uVar3 == 10) {
          local_6c = 0;
          local_60 = local_60 - *(int *)(*(int *)(this + 0x124) + 0x18);
          uVar3 = uVar9;
        }
        else {
          iVar16 = *(int *)(*(int *)(*(int *)(this + 0x124) + 0x14) + 8);
          while (iVar16 != 0) {
            if (*(uint *)(iVar16 + 0x10) < uVar3) {
              iVar16 = *(int *)(iVar16 + 0xc);
            }
            else {
              iVar16 = *(int *)(iVar16 + 8);
            }
          }
          iVar16 = kerningAmountForFirst(this,(ushort)uVar9,*local_58);
          local_40 = uVar3;
          iVar12 = std::
                   map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                   ::operator[](*(map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                                  **)(*(int *)(this + 0x124) + 0x14),&local_40);
          local_28 = *(CCRect *)(iVar12 + 4);
          uStack_24 = *(undefined4 *)(iVar12 + 8);
          CStack_20 = *(CCSize *)(iVar12 + 0xc);
          local_1c = *(undefined4 *)(iVar12 + 0x10);
          this_00 = (int *)CCNode::getChildByTag((CCNode *)this,(int)local_78);
          if (this_00 == (int *)0x0) {
            this_00 = (int *)operator_new(0x1c8);
            CCSprite::CCSprite((CCSprite *)this_00);
            CCSprite::initWithBatchNodeRectInPixels
                      ((CCSprite *)this_00,(CCSpriteBatchNode *)this,&local_28);
            (**(code **)(*(int *)this + 0xcc))(this,this_00,0,local_78);
            CCObject::release((CCObject *)this_00);
          }
          else {
            CCSprite::setTextureRectInPixels((CCSprite *)this_00,&local_28,false,&CStack_20);
            (**(code **)(*this_00 + 0x6c))(this_00,1);
            (**(code **)(*this_00 + 0xec))(this_00,0xff);
          }
          pcVar13 = *(code **)(*this_00 + 0x44);
          uVar5 = __floatsisf(local_6c + *(int *)(iVar12 + 0x14));
          uVar6 = __mulsf3(*(undefined4 *)(iVar12 + 0xc),0x3f000000);
          uVar5 = __addsf3(uVar5,uVar6);
          uVar6 = __floatsisf(iVar16);
          __addsf3(uVar5,uVar6);
          uVar5 = __floatsisf(local_60);
          uVar6 = __floatunsisf(*(undefined4 *)(*(int *)(this + 0x124) + 0x18));
          uVar7 = __floatsisf(*(undefined4 *)(iVar12 + 0x18));
          uVar6 = __subsf3(uVar6,uVar7);
          uVar5 = __addsf3(uVar5,uVar6);
          uVar6 = __mulsf3(local_1c,0x3f000000);
          uVar17 = __subsf3(uVar5,uVar6);
          CCPoint::CCPoint(aCStack_30,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
          (*pcVar13)(this_00,aCStack_30);
          local_3c = uVar3;
          iVar12 = std::
                   map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                   ::operator[](*(map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                                  **)(*(int *)(this + 0x124) + 0x14),&local_3c);
          local_6c = local_6c + iVar16 + *(int *)(iVar12 + 0x1c);
          (**(code **)(*this_00 + 0x10c))(this_00,this[0x11c]);
          (**(code **)(*this_00 + 0xf4))(this_00,this + DAT_00148534);
          if (this[0x118] != (CCLabelBMFont)0xff) {
            (**(code **)(*this_00 + 0xec))(this_00);
          }
          if (local_5c < local_6c) {
            local_5c = local_6c;
          }
        }
        local_58 = local_58 + 1;
        uVar9 = uVar3;
      }
      local_38 = __floatsisf(local_5c);
      local_34 = __floatunsisf(iVar14 * iVar15);
      (**(code **)(*(int *)this + 0x88))(this,&local_38);
      if (puVar2 != (ushort *)0x0) {
        operator_delete__(puVar2);
      }
    }
  }
  return;
}


