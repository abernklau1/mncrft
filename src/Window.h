#pragma once

namespace mncrft
{
  class Window
  {
    public:
      Window();

      virtual ~Window() = default;

    private:
      int m_Window;
  };
} // namespace mncrft
