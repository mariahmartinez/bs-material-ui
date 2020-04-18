[@bs.obj]
external makePropsMui:
  (
    ~className: string=?,
    ~clone: bool=?,
    ~children: 'children=?,
    ~component: 'union_rcgr=?,
    ~alignContent: string=?,
    ~alignItems: string=?,
    ~alignSelf: string=?,
    ~bgcolor: string=?,
    ~border: string=?,
    ~borderBottom: string=?,
    ~borderColor: string=?,
    ~borderLeft: string=?,
    ~borderRadius: string=?,
    ~borderRight: string=?,
    ~borderTop: string=?,
    ~boxShadow: string=?,
    ~boxSizing: string=?,
    ~color: string=?,
    ~display: string=?,
    ~displayPrint: string=?,
    ~flex: string=?,
    ~flexBasis: string=?,
    ~flexDirection: string=?,
    ~flexGrow: string=?,
    ~flexShrink: string=?,
    ~flexWrap: string=?,
    ~fontFamily: string=?,
    ~fontSize: string=?,
    ~fontStyle: string=?,
    ~fontWeight: string=?,
    ~gridArea: string=?,
    ~gridAutoColumns: string=?,
    ~gridAutoFlow: string=?,
    ~gridAutoRows: string=?,
    ~gridColumn: string=?,
    ~gridColumnGap: string=?,
    ~gridGap: string=?,
    ~gridRow: string=?,
    ~gridRowGap: string=?,
    ~gridTemplateAreas: string=?,
    ~gridTemplateColumns: string=?,
    ~gridTemplateRows: string=?,
    ~height: string=?,
    ~justifyContent: string=?,
    ~justifyItems: string=?,
    ~justifySelf: string=?,
    ~letterSpacing: string=?,
    ~lineHeight: string=?,
    ~maxHeight: string=?,
    ~maxWidth: string=?,
    ~mb: int=?,
    ~minHeight: string=?,
    ~minWidth: string=?,
    ~order: string=?,
    ~overflow: string=?,
    ~sizeHeight: string=?,
    ~sizeWidth: string=?,
    ~textAlign: string=?,
    ~textOverflow: string=?,
    ~visibility: string=?,
    ~whiteSpace: string=?,
    ~width: string=?,
    ~zIndex: int=?,
    ~id: string=?,
    ~key: string=?,
    ~ref: ReactDOMRe.domRef=?,
    unit
  ) =>
  _;

let makeProps =
    (
      ~className: option(string)=?,
      ~clone: option(bool)=?,
      ~children: option('children)=?,
      ~component:
         option(
           [
             | `String(string)
             | `Callback(unit => React.element)
             | `Element(React.element)
           ],
         )=?,
      ~alignContent: option(string)=?,
      ~alignItems: option(string)=?,
      ~alignSelf: option(string)=?,
      ~bgcolor: option(string)=?,
      ~border: option(string)=?,
      ~borderBottom: option(string)=?,
      ~borderColor: option(string)=?,
      ~borderLeft: option(string)=?,
      ~borderRadius: option(string)=?,
      ~borderRight: option(string)=?,
      ~borderTop: option(string)=?,
      ~boxShadow: option(string)=?,
      ~boxSizing: option(string)=?,
      ~color: option(string)=?,
      ~display: option(string)=?,
      ~displayPrint: option(string)=?,
      ~flex: option(string)=?,
      ~flexBasis: option(string)=?,
      ~flexDirection: option(string)=?,
      ~flexGrow: option(string)=?,
      ~flexShrink: option(string)=?,
      ~flexWrap: option(string)=?,
      ~fontFamily: option(string)=?,
      ~fontSize: option(string)=?,
      ~fontStyle: option(string)=?,
      ~fontWeight: option(string)=?,
      ~gridArea: option(string)=?,
      ~gridAutoColumns: option(string)=?,
      ~gridAutoFlow: option(string)=?,
      ~gridAutoRows: option(string)=?,
      ~gridColumn: option(string)=?,
      ~gridColumnGap: option(string)=?,
      ~gridGap: option(string)=?,
      ~gridRow: option(string)=?,
      ~gridRowGap: option(string)=?,
      ~gridTemplateAreas: option(string)=?,
      ~gridTemplateColumns: option(string)=?,
      ~gridTemplateRows: option(string)=?,
      ~height: option(string)=?,
      ~justifyContent: option(string)=?,
      ~justifyItems: option(string)=?,
      ~justifySelf: option(string)=?,
      ~letterSpacing: option(string)=?,
      ~lineHeight: option(string)=?,
      ~maxHeight: option(string)=?,
      ~maxWidth: option(string)=?,
      ~mb: option(int)=?,
      ~minHeight: option(string)=?,
      ~minWidth: option(string)=?,
      ~order: option(string)=?,
      ~overflow: option(string)=?,
      ~sizeHeight: option(string)=?,
      ~sizeWidth: option(string)=?,
      ~textAlign: option(string)=?,
      ~textOverflow: option(string)=?,
      ~visibility: option(string)=?,
      ~whiteSpace: option(string)=?,
      ~width: option(string)=?,
      ~zIndex: option(int)=?,
      ~id: option(string)=?,
      ~key: option(string)=?,
      ~ref: option(ReactDOMRe.domRef)=?,
      (),
    ) =>
  makePropsMui(
    ~className?,
    ~clone?,
    ~children?,
    ~component=?
      component->(Belt.Option.map(v => MaterialUi_Helpers.unwrapValue(v))),
    ~alignContent?,
    ~alignItems?,
    ~alignSelf?,
    ~bgcolor?,
    ~border?,
    ~borderBottom?,
    ~borderColor?,
    ~borderLeft?,
    ~borderRadius?,
    ~borderRight?,
    ~borderTop?,
    ~boxShadow?,
    ~boxSizing?,
    ~color?,
    ~display?,
    ~displayPrint?,
    ~flex?,
    ~flexBasis?,
    ~flexDirection?,
    ~flexGrow?,
    ~flexShrink?,
    ~flexWrap?,
    ~fontFamily?,
    ~fontSize?,
    ~fontStyle?,
    ~fontWeight?,
    ~gridArea?,
    ~gridAutoColumns?,
    ~gridAutoFlow?,
    ~gridAutoRows?,
    ~gridColumn?,
    ~gridColumnGap?,
    ~gridGap?,
    ~gridRow?,
    ~gridRowGap?,
    ~gridTemplateAreas?,
    ~gridTemplateColumns?,
    ~gridTemplateRows?,
    ~height?,
    ~justifyContent?,
    ~justifyItems?,
    ~justifySelf?,
    ~letterSpacing?,
    ~lineHeight?,
    ~maxHeight?,
    ~maxWidth?,
    ~mb?,
    ~minHeight?,
    ~minWidth?,
    ~order?,
    ~overflow?,
    ~sizeHeight?,
    ~sizeWidth?,
    ~textAlign?,
    ~textOverflow?,
    ~visibility?,
    ~whiteSpace?,
    ~width?,
    ~zIndex?,
    ~id?,
    ~key?,
    ~ref?,
    (),
  );

[@bs.module "@material-ui/core"] external make: React.component('a) = "Box";
