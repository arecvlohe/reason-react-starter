/* Name the component */
let component = ReasonReact.statelessComponent("App");

/* Make the component */
let make = _children => {
  ...component,
  render: _self => <div> {"Reason React!" |> ReasonReact.string} </div>,
};

/* Wrap it for JavaScript so it can be imported and used inside of client.js */
let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));
