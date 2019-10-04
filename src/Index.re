// TODO: explain this file

[@bs.val] external document: Js.t({..}) = "document";

let style = document##createElement("style");
document##head##appendChild(style);
style##innerHTML #= ExampleContainer.globalStyle;

let container = document##createElement("div");
document##body##appendChild(container);

ReactDOMRe.render(
  <>
    <ExampleContainer title="Blinking Greeting">
      <BlinkingGreeting> {React.string("Hello!")} </BlinkingGreeting>
    </ExampleContainer>
    <ExampleContainer title="Reducer From ReactJS Docs">
      <ReducerFromReactJSDocs />
    </ExampleContainer>
    <ExampleContainer title="Fetched Dog Pictures"> <FetchedDogPictures /> </ExampleContainer>
    <ExampleContainer title="Interop"> <Interop /> </ExampleContainer>
  </>,
  container,
);
