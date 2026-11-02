/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164fe4  Symbol: initWithTMXFile */

/* cocos2d::CCTMXTiledMap::initWithTMXFile(char const*) */

undefined4 __thiscall cocos2d::CCTMXTiledMap::initWithTMXFile(CCTMXTiledMap *this,char *param_1)

{
  int *this_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  CCObject *this_01;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  CCTMXLayerInfo *pCVar7;
  undefined4 uVar8;
  int *__s;
  undefined4 uVar9;
  code *pcVar10;
  int local_38;
  CCTMXLayerInfo **local_34;
  undefined auStack_28 [4];
  basic_string bStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  (**(code **)(*(int *)this + 0x80))(this,DAT_001651ac + 0x164ff4);
  this_00 = (int *)CCTMXMapInfo::formatWithTMXFile(param_1);
  if (this_00 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)(**(code **)(*this_00 + 0x1c))();
    *(undefined4 *)(this + 0xfc) = *puVar1;
    *(undefined4 *)(this + 0x100) = puVar1[1];
    puVar1 = (undefined4 *)(**(code **)(*this_00 + 0x24))(this_00);
    *(undefined4 *)(this + 0x104) = *puVar1;
    *(undefined4 *)(this + 0x108) = puVar1[1];
    uVar2 = (**(code **)(*this_00 + 0x14))(this_00);
    *(undefined4 *)(this + 0x10c) = uVar2;
    pcVar10 = *(code **)(*(int *)this + 0x104);
    uVar2 = (**(code **)(*this_00 + 0x3c))(this_00);
    (*pcVar10)(this,uVar2);
    pcVar10 = *(code **)(*(int *)this + 0x10c);
    uVar2 = (**(code **)(*this_00 + 100))(this_00);
    (*pcVar10)(this,uVar2);
    if (*(CCObject **)(this + 0x118) != (CCObject *)0x0) {
      CCObject::release(*(CCObject **)(this + 0x118));
    }
    this_01 = (CCObject *)CCTMXMapInfo::getTileProperties((CCTMXMapInfo *)this_00);
    *(CCObject **)(this + 0x118) = this_01;
    if (this_01 != (CCObject *)0x0) {
      CCObject::retain(this_01);
    }
    iVar3 = (**(code **)(*this_00 + 0x2c))(this_00);
    uVar2 = 1;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14) >> 2 != 0)) {
      if (*(int *)(this + 0x11c) == 0) {
        piVar4 = (int *)operator_new(0x34);
        CCObject::CCObject((CCObject *)piVar4);
        __s = piVar4 + 6;
        *piVar4 = *(int *)(DAT_001651b0 + 0x1650c4) + 8;
        memset(__s,0,0x10);
        piVar4[10] = 0;
        piVar4[8] = (int)__s;
        piVar4[9] = (int)__s;
        piVar4[0xc] = 0;
        *(CCObject *)(piVar4 + 0xb) = (CCObject)0x0;
        *(int **)(this + 0x11c) = piVar4;
      }
      local_38 = 0;
      local_34 = *(CCTMXLayerInfo ***)(iVar3 + 0x14);
      while (local_34 != *(CCTMXLayerInfo ***)(iVar3 + 0x18)) {
        pCVar7 = *local_34;
        local_34 = local_34 + 1;
        if ((pCVar7 != (CCTMXLayerInfo *)0x0) && (pCVar7[0x28] != (CCTMXLayerInfo)0x0)) {
          piVar4 = (int *)parseLayer(this,pCVar7,(CCTMXMapInfo *)this_00);
          (**(code **)(*(int *)this + 0xcc))(this,piVar4,local_38,local_38);
          FUN_001eed40(&bStack_24,piVar4[0x4c],auStack_28);
          CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTMXLayer*>
          ::setObject(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTMXLayer*>
                        **)(this + 0x11c),(CCTMXLayer *)piVar4,&bStack_24);
          puVar1 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))(piVar4);
          puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x7c))(this);
          uVar8 = *puVar5;
          local_1c = puVar5[1];
          uVar9 = *puVar1;
          local_20 = uVar8;
          iVar6 = __aeabi_fcmplt(uVar8,uVar9);
          uVar2 = local_1c;
          local_20 = uVar8;
          if (iVar6 != 0) {
            local_20 = uVar9;
          }
          uVar8 = puVar1[1];
          iVar6 = __aeabi_fcmplt(local_1c,uVar8);
          local_1c = uVar2;
          if (iVar6 != 0) {
            local_1c = uVar8;
          }
          (**(code **)(*(int *)this + 0x80))(this,&local_20);
          local_38 = local_38 + 1;
          FUN_001ed6b8(&bStack_24);
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


