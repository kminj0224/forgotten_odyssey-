/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014818e  Symbol: operator[] */

/* std::map<unsigned int, cocos2d::_BMFontDef, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, cocos2d::_BMFontDef> > >::operator[](unsigned int
   const&) */

map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
* __thiscall
std::
map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
::operator[](map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
             *this,uint *param_1)

{
  map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
  *pmVar1;
  map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
  *pmVar2;
  map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
  *pmVar3;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  pmVar1 = *(map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
             **)(this + 8);
  pmVar2 = this + 4;
  while (pmVar3 = pmVar1,
        pmVar3 != (map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                   *)0x0) {
    if (*(uint *)(pmVar3 + 0x10) < *param_1) {
      pmVar1 = *(map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                 **)(pmVar3 + 0xc);
    }
    else {
      pmVar1 = *(map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                 **)(pmVar3 + 8);
      pmVar2 = pmVar3;
    }
  }
  if ((pmVar2 == this + 4) || (*param_1 < *(uint *)(pmVar2 + 0x10))) {
    memset(&local_5c,0,0x20);
    cocos2d::CCRect::CCRect((CCRect *)&uStack_58);
    local_3c = *param_1;
    local_38 = local_5c;
    uStack_34 = uStack_58;
    uStack_30 = uStack_54;
    local_2c = local_50;
    uStack_28 = uStack_4c;
    uStack_24 = uStack_48;
    local_20 = local_44;
    uStack_1c = uStack_40;
    pmVar2 = (map<unsigned_int,cocos2d::_BMFontDef,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
              *)_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                ::_M_insert_unique_((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
                                     *)this,(_Rb_tree_const_iterator)pmVar2,(pair *)&local_3c);
  }
  return pmVar2 + 0x14;
}


